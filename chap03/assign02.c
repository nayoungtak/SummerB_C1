/*
 ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment02
 ���� : ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0302(void)
{
	int g = 0, s = 0;

	printf("������ ����? ");
	scanf("%d", &g);
	printf("\n������ ����? ");
	scanf("%d", &s);
	printf("\n���簢���� ����: %d", g * s);
	printf("\n���簢���� �ѷ�: %d", 2 * g + 2 * s);

	return;
}

int main(void)
{
	Assignment0302();

	return 0;
}

