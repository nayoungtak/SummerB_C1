/*
 ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment02
 ���� : ȭ�� �µ�('F)�� �Ǽ��� �Է¹޾� ���� �µ�('C)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.03
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double FahrenheitCelsius(double f);
int assignment0402(void);


int main(void)
{
	assignment0402();
	return 0;
}

double FahrenheitCelsius(double f)
{
	return (f - 32) * 5 / 9;
}

int assignment0402(void)
{
	double f = 0.0;
	printf("ȭ���µ�? ");
	scanf("%lf", &f);

	printf("%.2lf F = %.2lf C", f, FahrenheitCelsius(f));
	return 0;
}