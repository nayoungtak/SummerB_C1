/*
 ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment04
 ���� : ��ü�� �ۿ��� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
        ���� ũ��� N ������ �Է¹ް�, �̵��� �Ÿ��� m ������ �Է¹޴´�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0304(void);
double GetJ(double N, double m);


int main(void)
{
	Assignment0304();

	return 0;
}

void Assignment0304(void)
{
	double N = 0, m = 0;
	double J = 0.0;

	printf("��(N)? ");
	scanf("%lf", &N);
	printf("�̵��Ÿ�(m)? ");
	scanf("%lf", &m);

	printf("���� ��: %.2f J", GetJ(N, m));

	return;
}

double GetJ(double N, double m)
{
	return 	N * m;
}
