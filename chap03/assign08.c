/*
 ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment08
 ���� : ���̸� �ߵ�(yd)�� �Է¹޾� ����(m)�� ��ȯ�ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 1yd�� 0.9144m�� �ش�ȴ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0308(void);
double ChangeYdToM(double yd);


int main(void)
{
	Assignment0308();
	return 0;
}

void Assignment0308(void)
{
	double yd = 0.0;
	printf("����(yd)? ");
	scanf("%lf", &yd);

	printf("%.lf yd = %.6lf m", yd, ChangeYdToM(yd));

	return;
}

double ChangeYdToM(double yd)
{
	return yd * 0.9144;
}