/*
 ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment11
 ���� : ��/�޷� ȯ���� ��ȭ�� �Է¹޾� �� �޷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0311(void);


int main(void)
{
	Assignment0311();
	return 0;
}

void Assignment0311(void)
{
	double krw = 0.0, H = 0.0;

	printf("KRW? ");
	scanf("%lf", &krw);
	printf("��/�޷� ȯ��? ");
	scanf("%lf", &H);

	double usd = krw / H;

	printf("KRW %.lf = USD %.2f", krw, usd);
	return;
}
