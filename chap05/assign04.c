/*
 ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment04
 ���� : ������ �Է¹޾� �������� �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�. ������ �ȴ� ������ ������ ����.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.07
 ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0504(void);

int main(void)
{
	assignment0504();
	return 0;
}

double assignment0504(void)
{
	int year = 0;
	printf("����? ");
	scanf("%d", &year);

	if ((year % 4) == 0)
	{
		if ((year % 100) == 0)
		{
			if ((year % 400) == 0)
			{
				printf("%d���� �����Դϴ�.");
			}
			else
			{
				printf("%d���� ����Դϴ�.");
			}
		}
		else
		{
			printf("%d���� �����Դϴ�.");
		}
	}
	else
	{
		printf("%d���� ����Դϴ�.");
	}

	return 0;
}

