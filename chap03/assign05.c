/*
 ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment05
 ���� : ���̸� ��ġ(inch)�� �Է¹޾� ��Ƽ����(cm)�� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�. 1 inch�� 2.54cm�� �ش�ȴ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0305(void);
double ChangeInchToCm(double inch);


int main(void)
{
	Assignment0305();

	return 0;
}

void Assignment0305(void)
{
	double inch = 0;

	printf("����(inch)? ");
	scanf("%lf", &inch);

	printf("%.6lf inch = %.6lf cm", inch, ChangeInchToCm(inch));

	return;
}

double ChangeInchToCm(double inch)
{
	return 	inch * 2.54;
}
