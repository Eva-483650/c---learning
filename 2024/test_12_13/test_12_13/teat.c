#define _CRT_SECURE_NO_WARNINGS
//����˼·Ϊ�ݹ��DFS����
//#include<stdio.h>
//int n;
//int a[100] = { 0 };
//int check(int sit)
//{
//    for (int i = 0; i < sit; i++)
//    {
//        if (a[i] < a[i + 1])
//            return 0;
//    }
//    return 1;
//}
//void dfs(int x, int sit)
//{
//    for (int i = x - 1; i > 0; i--)
//    {
//        a[sit] = i;
//        a[sit + 1] = x - i;
//        if (check(sit + 1) == 1)
//        {
//            printf("%d=",n);
//            int tmp = 0;
//            for (int j = 0; j <= sit + 1; j++)
//            {
//                if (tmp == 1)
//                    printf("+");
//                tmp = 1;
//                printf("%d", a[j]);
//            }
//            printf("\n");
//        }
//        if (a[sit + 1] > 1)
//            dfs(x - i, sit + 1);
//    }
//}
//int main(void)
//{
//    scanf("%d", &n);
//    dfs(n, 0);//�������Ѳ���
//    return 0;
//}

//#include <stdio.h>
//int N;
//int num = 0;
//int queenSit[10];
//int check(int* sit, int step)
//{
//    for (int i = 0; i <= step; i++)
//        for (int j = i + 1; j <= step; j++)
//        {
//            if (sit[i] == sit[j])
//                return 0;
//            else if (sit[i] == sit[j] - (j - i))
//                return 0;
//            else if (sit[i] == sit[j] + (j - i))
//                return 0;
//        }
//    return 1;
//}
//void dfs(int* sit, int step)
//{
//    if (step == N)
//        num++;
//    int* tmSit = sit;
//    if (step < N)
//        for (int i = 0; i < N; i++)
//        {
//            tmSit[step] = i;
//            if (check(tmSit, step))
//                dfs(tmSit, step + 1);
//        }
//}
//int main(void)
//{
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//    {
//        queenSit[0] = i;
//        dfs(queenSit, 1);
//    }
//    printf("%d", num);
//    return 0;
//}



//˫����ʿ
//����n��Ϊ���ĸ�����������2n�ֱ��Ӧÿ�ѽ��Ĺ������ͷ�����
//Ҫ��������Ž�Ϊ�����ѽ������������ͷ�����֮����ͬʱ����ѡ���ſ�ǰ�����ѽ���
//������ά����
#include <stdio.h>
int min(int a, int b)
{
	return a < b ? a : b;
}
int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int n = 0;
	int a[1000][2] = { 0 };
	int defend, attack, x, y;
	int sum_max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a[i][0], &a[i][1]);//0���� 1����
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			defend = min(a[i][0], a[j][0]);
			attack = max(a[i][1], a[j][1]);
			if (sum_max < (defend + attack))
			{
				sum_max = defend + attack;
				x = i;
				y = j;
			}
		}
	}
	printf("%d %d", x + 1, y + 1);//ע������1��ʼ����
}



