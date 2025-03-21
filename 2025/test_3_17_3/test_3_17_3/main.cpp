#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<mmstream.h>
#pragma comment(lib, "winmm.lib")

void playBackgroundMusic(const char* music)
{
	char cmd[100] = { 0 };
	sprintf(cmd, "open %s alias bgm", music);
	MCIERROR ret = mciSendString(cmd, NULL, 0, NULL);
	if (ret != 0)
	{
		char err[100] = { 0 };
		mciGetErrorString(ret, err, sizeof(err));
		printf("[open]:%s\n", err);
	}
	mciSendString("play bgm", NULL, 0, NULL);
}

int main()
{
	// Play the sound
	playBackgroundMusic("assets/That-Girl.mp3");
	getchar();
	return 0;
}