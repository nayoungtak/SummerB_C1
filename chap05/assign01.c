/*
 ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment01
 ���� : ���� ��ǥ(x,y)�� �Է¹޾� ��ũ�� ���� ���� ���� ���� ������ �˻��ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.07
 ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0501(void);

int main(void)
{
	assignment0501();
	return 0;
}

double assignment0501(void)
{
	int left = 0, top = 0, right = 0, bottom = 0;
	int x = 0, y = 0;

	printf("���� ������ �»����(left, top)? ");
	scanf("%d %d", &left, &top);
	printf("���� ������ ���ϴ���(right, bottom)? ");
	scanf("%d %d", &right, &bottom);
	printf("���� ��ǥ (x, y)? ");
	scanf("%d %d", &x, &y);

	if (left < x < right && top < y < bottom)
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}
	else
	{
		printf("���簢�� ����� ���� ���� ���� ���Դϴ�.");
	}

	return 0;
}

