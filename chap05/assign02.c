/*
 ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment02
 ���� : ������ ��鿡 �ִ� ���� ��ǥ (x, y)�� �Է¹޾� ��� ��и��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.07
 ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0502(void);

int main(void)
{
	assignment0502();
	return 0;
}

double assignment0502(void)
{
	int x = 0, y = 0;
	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0 && y > 0)
	{
		printf("2��и鿡 �ֽ��ϴ�.");
	}
	else if (x < 0 && y < 0)
	{
		printf("3��и鿡 �ֽ��ϴ�.");
	}
	else if (x > 0 && y < 0)
	{
		printf("4��и鿡 �ֽ��ϴ�.");
	}
	else
	{
		printf("��ǥ�� ���� �ֽ��ϴ�.");
	}

	return 0;
}

