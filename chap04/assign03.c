/*
 ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment03
 ���� : ������ ���Ǹ� �Ǽ��� �Է¹޾� �е��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		������ g������ �Է¹ް�, ���Ǵ� cm^3������ �Է¹޴´�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.03
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0403(void);
double DensityCalculation(double g, double cm3);


int main(void)
{
	assignment0403();
	return 0;
}

int assignment0403(void)
{
	double g = 0.0;
	double cm3 = 0.0;
	
	printf("����(g)? ");
	scanf("%lf", &g);
	printf("����(��������Ƽ����)? ");
	scanf("%lf", &cm3);

	printf("�е�: %.6lf", DensityCalculation(g, cm3));

	return 0;
}

double DensityCalculation(double g, double cm3)
{
	return g / cm3;
}