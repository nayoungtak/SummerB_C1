/*
 ���ϸ�: Core C Programming 2nd Edition Chap02 Proframming Assignment08
 ���� : �Ǽ� 2���� �Է¹޾Ƽ� �հ� ���� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.01
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0207(void)
{
	double a;
	double b;

	printf("�Ǽ� 2��? ");
	scanf("%lf %lf", &a, &b);

	printf("%.6lf + %.6lf = %.6lf\n", a, b, a + b);
	printf("%.6lf - %.6lf = %.6lf\n", a, b, a - b);

	return;
}

int main(void)
{
	Assignment0207();

	return 0;
}