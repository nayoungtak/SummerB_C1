/*
 ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment09
 ���� : ���Ը� �Ŀ��(lb)�� �Է¹޾� ų�α׷�(kg)���� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 1lb�� 0.45359237kg�� �ش��Ѵ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0309(void);
double ChangeLdToKg(double ld);


int main(void)
{
	Assignment0309();
	return 0;
}

void Assignment0309(void)
{
	double ld = 0.0;
	printf("����(ld)? ");
	scanf("%lf", &ld);

	printf("%.lf ld = %.6lf kg", ld, ChangeLdToKg(ld));

	return;
}

double ChangeLdToKg(double ld)
{
	return ld * 0.45359237;
}