/*
 ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment14
 ���� : �⺻ ��ݰ� �� ��뷮(kWh)�� �Է¹޾� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		��뷮�� ���� ����� 190��/hWh�̴�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.03
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0414(void);
int ElectricityBillCalculation(int Fare, int Usage);



int main(void)
{
	assignment0414();
	return 0;
}

int assignment0414(void)
{
	int Fare = 0;
	int Usage = 0;

	printf("�⺻ ���? ");
	scanf("%d", &Fare);
	printf("�� ��뷮(kWh)? ");
	scanf("%d", &Usage);

	printf("���� ���: %d�� ", ElectricityBillCalculation(Fare, Usage));

	return 0;
}

int ElectricityBillCalculation(int Fare, int Usage)
{
	return Fare + Usage * 190;
}