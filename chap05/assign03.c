/*
 ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment03
 ���� : �Ž������� �ݾ��� �Է¹޾� ������, ����, õ��, ���, �ʿ�¥���� ���� �� �� �ʿ����� ���ؼ� ����Ͻÿ�.
		 �ʿ� �̸� ������ �����Ѵ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.07
 ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0503(void);
double gesan(int gus);

int main(void)
{
	assignment0503();
	return 0;
}

double assignment0503(void)
{
	int gus = 0;

	gus = gesan(gus);

	if ((gus / 50000) != 0)
	{
		printf("%7d %2d��\n", 50000, gus / 50000);
		gus %= 50000;
	}
	if ((gus / 10000) != 0)
	{
		printf("%7d %2d��\n", 10000, gus / 10000);
		gus %= 10000;
	}
	if ((gus / 5000) != 0)
	{
		printf("%7d %2d��\n", 5000, gus / 5000);
		gus %= 5000;
	}
	if ((gus / 1000) != 0)
	{
		printf("%7d %2d��\n", 1000, gus / 1000);
		gus %= 1000;
	}
	if ((gus / 100) != 0)
	{
		printf("%7d %2d��\n", 100, gus / 100);
		gus %= 100;
	}
	if ((gus / 10) != 0)
	{
		printf("%7d %2d��\n", 10, gus / 10);
	}

	return 0;
}

double gesan(int gus)
{

	printf("�Ž����� ? ");
	scanf("%d", &gus);

	gus = gus - (gus % 10);
	printf("�Ž����� (10�� �̸� ����): %d\n", gus);

	return gus;
}
