/*
 ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment10
 ���� : ��/�޷� ȯ���� �޷��� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0310(void)
{
	double usd = 0, H = 0;

	printf("USD? ");
	scanf("%lf", &usd);
	printf("��/�޷� ȯ��? ");
	scanf("%lf", &H);

	double krw = usd * H;

	printf("USD %.2f = KRW %.2f", usd, krw);
	return;
}

int main(void)
{
	Assignment0310();
	return 0;
}