/*
 ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment05
 ���� : �µ��� �Է¹޾� ���� �µ��� ȭ�� �µ���, ȭ�� �µ��� ���� �µ��� ��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.07
 ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0505(void);

int main(void)
{
	assignment0505();
	return 0;
}

double assignment0505(void)
{
	double ondo = 0, F = 0.0, C = 0.0;
	char J;

	printf("�µ�? ");
	scanf("%lf %c", &ondo, &J);

	switch (J)
	{
	case 'C':
		F = (ondo * (9.0 / 5.0)) + 32;
		printf("%.2lf C ==> %.2lf F", ondo, F);
		break;
	case 'F':
		C = (ondo - 32) * (5.0 / 9.0);
		printf("%.2lf F ==> %.2lf C", ondo, C);
		break;
	}

	return 0;
}

