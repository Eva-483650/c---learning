#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include <json-c/json.h>
//#include <windows.h>
#define KEY       "a5a0b276466e253c0ab0ea5ed527fdeb"  // �����������Key
#define SIZE       512   // URL��С
#define STR        4096  // �ַ�����С  

// �洢 POI ��Ϣ�Ľṹ��
typedef struct POIInfo {
    char name[STR];
    char address[STR];
    char location[STR];
    char province[STR];
    char city[STR];
    char district[STR];
    char type[STR];
    struct POIInfo* next;
} POIInfo;

// �����ֽ��ַ���ת��Ϊ UTF-8
char* ConvertToUTF8(const char* input)
{
    // Step 1: ���ֽڣ�GBK���� ���ַ���UTF-16��
    int wc_len = MultiByteToWideChar(CP_ACP, 0, input, -1, NULL, 0);
    wchar_t* wstr = (wchar_t*)malloc(wc_len * sizeof(wchar_t));
    MultiByteToWideChar(CP_ACP, 0, input, -1, wstr, wc_len);

    // Step 2: ���ַ���UTF-16���� UTF-8
    int utf8_len = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, NULL, 0, NULL, NULL);
    char* utf8_str = (char*)malloc(utf8_len);
    WideCharToMultiByte(CP_UTF8, 0, wstr, -1, utf8_str, utf8_len, NULL, NULL);

    free(wstr);
    return utf8_str;
}

// ��UTF-8ת��Ϊ���ֽ��ַ���
char* ConvertToGBK(const char* utf8_str)
{
    if (!utf8_str || *utf8_str == '\0')
    {
        char* empty = (char*)malloc(1);
        *empty = '\0';
        return empty;
    }

    // Step 1: UTF-8 �� UTF-16
    int wlen = MultiByteToWideChar(CP_UTF8, 0, utf8_str, -1, NULL, 0);
    wchar_t* wstr = (wchar_t*)malloc(wlen * sizeof(wchar_t));
    MultiByteToWideChar(CP_UTF8, 0, utf8_str, -1, wstr, wlen);

    // Step 2: UTF-16 �� GBK
    int glen = WideCharToMultiByte(CP_ACP, 0, wstr, -1, NULL, 0, NULL, NULL);
    char* gbk_str = (char*)malloc(glen);
    WideCharToMultiByte(CP_ACP, 0, wstr, -1, gbk_str, glen, NULL, NULL);
    free(wstr);
    if (!gbk_str)
    {
        fprintf(stderr, "GBKת��ʧ��: %s\n", utf8_str);
        return _strdup(""); // ���ؿ��ַ����������
    }
    return gbk_str; // ��Ҫ�������ͷ��ڴ�
}

// �����½ڵ㣨��Ϊ���ؽڵ�ָ�룩
POIInfo* CreatePOINode() 
{
    POIInfo* new_node = (POIInfo*)calloc(1, sizeof(POIInfo));
    if (!new_node) {
        fprintf(stderr, "Failed to allocate POI node\n");
        return NULL;
    }
    return new_node;
}

// ��ӽڵ㵽����ͨ��˫��ָ���޸�����ͷ��
void AppendToLinkedList(POIInfo** head, POIInfo* new_node)
{
    if (!new_node) return;

    if (*head == NULL) {
        *head = new_node;
    }
    else {
        POIInfo* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

// �洢 API ���ص�����
typedef struct 
{
    char* memory;
    size_t size;
} Data;

// �ص��������ڴ洢 API ���ص�����
size_t got_data(char* buffer, size_t size, size_t nmemb, void* userp) 
{
    size_t bytes = size * nmemb;
    Data* data = (Data*)userp;
    data->memory = (char*)realloc(data->memory, data->size + bytes + 1);
    if (data->memory == NULL) {
        printf("�ڴ����ʧ�ܣ�\n");
        return 0;
    }
    memcpy(&(data->memory[data->size]), buffer, bytes);
    data->size += bytes;
    data->memory[data->size] = 0;
    return bytes;
}

// ����JSON���������ͨ��������������ͷ��
void ParsePOIData(json_object* json, POIInfo** head) 
{
    if (!json || !head) return;

    struct json_object* pois;
    if (!json_object_object_get_ex(json, "pois", &pois)) return;

    int len = json_object_array_length(pois);
    for (int i = 0; i < len; i++) 
    {
        POIInfo* node = CreatePOINode();
        if (!node) continue;

        struct json_object* poi = json_object_array_get_idx(pois, i);
        struct json_object* field;

        // ʹ�ð�ȫ��������
        #define SAFE_COPY(field_name, target) do { \
            if (json_object_object_get_ex(poi, field_name, &field)) { \
                const char* utf8_value = json_object_get_string(field); \
                char* gbk_value = ConvertToGBK(utf8_value); \
                strncpy(target, gbk_value, STR-1); \
                target[STR-1] = '\0'; \
                free(gbk_value); \
            } \
        } while(0)

        SAFE_COPY("name", node->name);
        SAFE_COPY("address", node->address);
        SAFE_COPY("location", node->location);
        SAFE_COPY("pname", node->province);
        SAFE_COPY("cityname", node->city);
        SAFE_COPY("adname", node->district);
        SAFE_COPY("type", node->type);

        AppendToLinkedList(head, node);
    }
}

// ��ӡ����ͨ��������������ͷ��
void PrintLinkedList(const POIInfo* head) 
{
    int i = 0;
	printf("=====================================\n");
    for (const POIInfo* current = head; current != NULL; current = current->next) 
    {
        i++;
        printf("[POI %d]\n"
            "����: %s\n"
            "��ϸ��ַ: %s\n"
            "��γ��: %s\n"
            "����ʡ��: %s\n"
            "��������: %s\n"
            "��������: %s\n"
            "��������: %s\n\n"
            ,i,current->name, current->address, current->location,
            current->province, current->city, current->district, current->type);
    }
    printf("=====================================\n");

}

// �ͷ�����ͨ��˫��ָ��ȷ��ͷָ���ÿգ�
void FreeLinkedList(POIInfo** head) 
{
    POIInfo* current = *head;
    while (current != NULL) 
    {
        POIInfo* temp = current;
        current = current->next;
        free(temp);
    }
    *head = NULL;
}

// ����name����POI
POIInfo* FindPOI(const POIInfo* head, const char* name)
{
	for (const POIInfo* current = head; current != NULL; current = current->next)
	{
		if (strcmp(current->name, name) == 0)
		{
			return (POIInfo*)current;
		}
	}
	return NULL;
}

// ���� JSON ����ӡ POI ��Ϣ
//void PrintPOIData(json_object* json) 
//{
//    struct json_object* status, * pois;
//
//    // ��� status �ֶ�
//    if (!json_object_object_get_ex(json, "status", &status) ||
//        strcmp(json_object_get_string(status), "1") != 0) {
//        printf("API request failed, returned status = %s\n", json_object_get_string(status));
//        return;
//    }
//
//    // ��� pois �ֶ�
//    if (!json_object_object_get_ex(json, "pois", &pois)) {
//        printf("No pois field found. Please check the API response format!\n");
//        return;
//    }
//
//    int len = json_object_array_length(pois);
//    printf("Found a total of %d POI results\n", len);
//
//    for (int i = 0; i < len; i++) 
//    {
//        struct json_object* poi = json_object_array_get_idx(pois, i);
//        struct json_object* name, * address, * location,* province,* city,* district,* type;
//
//        json_object_object_get_ex(poi, "name", &name);
//        json_object_object_get_ex(poi, "address", &address);
//        json_object_object_get_ex(poi, "location", &location);
//        json_object_object_get_ex(poi, "pname", &province);
//        json_object_object_get_ex(poi, "cityname", &city);
//        json_object_object_get_ex(poi, "adname", &district);
//        json_object_object_get_ex(poi, "type", &type);
//
//
//        printf("Name: %s\nAddress: %s\nCoordinates: %s\nProvince:%s\nCity: %s\nDistrict: %s\nType: %s\n\n",
//            json_object_get_string(name),
//            json_object_get_string(address),
//            json_object_get_string(location),
//			json_object_get_string(province),
//            json_object_get_string(city),
//            json_object_get_string(district),
//            json_object_get_string(type));
//    }
//}



int main() 
{
    // �����ն����Ϊ UTF-8
    //SetConsoleOutputCP(CP_UTF8);

    char keywords[STR] = { 0 };
    char region[STR] = { 0 };

    printf("������������(��):");
    fgets(region, sizeof(region), stdin);
    region[strcspn(region, "\n")] = '\0'; // ȥ��ĩβ���з�
    printf("������ص�����:");
    fgets(keywords, sizeof(keywords), stdin);
    keywords[strcspn(keywords, "\n")] = '\0'; // ȥ��ĩβ���з�

    // ת��Ϊ UTF-8
    char* utf8_region = ConvertToUTF8(region);
    char* utf8_keywords = ConvertToUTF8(keywords);

    // ���� API ���� URL
    char url[SIZE];
    snprintf(url, SIZE, "https://restapi.amap.com/v5/place/text?keywords=%s&region=%s&key=%s",
        utf8_keywords, utf8_region, KEY);

    //printf("Request URL: %s\n", url);
	free(utf8_region);
	free(utf8_keywords);

    Data main_data;
    main_data.memory = (char*)malloc(1);
    main_data.size = 0;

    CURL* curl = curl_easy_init();
    if (!curl) {
        fprintf(stderr, "CURL initialization failed!\n");
        return 1;
    }

    curl_easy_setopt(curl, CURLOPT_URL, url);
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, got_data);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void*)&main_data);

    CURLcode ret = curl_easy_perform(curl);
    if (ret != CURLE_OK) {
        fprintf(stderr, "CURL request failed: %s\n", curl_easy_strerror(ret));
        return 1;
    }

    curl_easy_cleanup(curl);

    // ��ӡ API ��������
   //printf("API response data:\n%s\n", main_data.memory);

    // ���� JSON ����
    //json_object* json = json_tokener_parse(main_data.memory);
    //PrintPOIData(json);
   // json_object_put(json);

   POIInfo* poi_list = NULL;  // ��������ͷָ��

   json_object* json = json_tokener_parse(main_data.memory);
   if (json)
   {
       ParsePOIData(json, &poi_list);  // ͨ��������������ͷ��ַ
       PrintLinkedList(poi_list);
       //ѡ��POI name
	   char poi_name[STR] = { 0 };
	   printf("������������ӵĵص�:");
	   fgets(poi_name, sizeof(poi_name), stdin);
	   poi_name[strcspn(poi_name, "\n")] = '\0'; // ȥ��ĩβ���з�
       //����POI
       POIInfo* current = FindPOI(poi_list, poi_name);
       if (current==NULL)
	   {
		   printf("�Ҳ����õص�!\n");
		   FreeLinkedList(&poi_list);// ��ȫ�ͷŲ��ÿ�
		   json_object_put(json);
		   return 1;
	   }
	   printf("���ҵ��õص�!\n");
	   //��ӡPOI
       printf("[POI]\n"
           "����: %s\n"
           "��ϸ��ַ: %s\n"
           "��γ��: %s\n"
           "����ʡ��: %s\n"
           "��������: %s\n"
           "��������: %s\n"
           "��������: %s\n\n"
           , current->name, current->address, current->location,
           current->province, current->city, current->district, current->type);
       FreeLinkedList(&poi_list);// ��ȫ�ͷŲ��ÿ�
       json_object_put(json);
   }
    free(main_data.memory);

    return 0;
}