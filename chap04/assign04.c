/*
 ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment04
 ���� : ����� ������ ������ ������ ������ �Է¹޾� ����� �ۼ�Ʈ �󵵸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
		����� ������ ������ ������ g ������ �Է¹޴´�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.03
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0404(void);
double ConcentrationCalculation(double solvent, double solute);



int main(void)
{
	assignment0404();
	return 0;
}

int assignment0404(void)
{
	double solvent = 0.0;
	double solute = 0.0;

	printf("���(g)? ");
	scanf("%lf", &solvent);
	printf("����(g)? ");
	scanf("%lf", &solute);

	printf("��: %.2lf ", ConcentrationCalculation(solvent, solute));

	return 0;
}

double ConcentrationCalculation(double solvent, double solute)
{
	return (solute / (solvent + solute)) * 100;
}