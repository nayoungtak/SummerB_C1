/*
 ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment19
 ���� : ��ȭ��� �����쾾�� ��ȭ �⿬�Ḧ ���� ���� �⿬��� ������ �⺻ �⿬��� ���� ����Ƽ�� ������ ����ϰ� �ִ�.
		���� ����Ƽ�� ���� ���� �б��� ���� ���� �ʰ��ϴ� ��� ���� 1�δ� �󸶷� ����� �ϰ� �ȴ�.
		�⺻ �⿬��, ���� �б��� ���� ��, ���� 1�δ� ���� ����Ƽ�� �Է¹޾Ƽ� ���� �⿬�Ḧ ����ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		���� ���� ���� �鸸��, 2�鸸��, ~~~, 15�鸸���� ���� ���� �⿬�Ḧ ���ؼ� ����Ѵ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.07
 ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0519(void);
int PerformanceFeeCalculation(int basic, int Saudience, int guarantee, int audience);


int main(void)
{
	assignment0519();
	return 0;
}

double assignment0519(void)
{
	int basic = 0;
	int breakeven = 0;
	int guarantee = 0;

	printf("�⺻ �⿬��? ");
	scanf("%d", &basic);
	printf("���� �б��� ���� ��? ");
	scanf("%d", &breakeven);
	printf("���� 1�δ� ���� ����Ƽ? ");
	scanf("%d", &guarantee);

	for (int i = 1; i <= 15; i++)
	{
		printf("���� %d�� �� �� ���� �⿬��: %d��\n", i * 1000000, PerformanceFeeCalculation(basic, breakeven, guarantee, (i * 1000000)));
	}
	
	return 0;
}

int PerformanceFeeCalculation(int basic, int breakeven, int guarantee, int audience)
{
	int fee = basic;
	if (audience > breakeven)
		fee += (audience - breakeven) * guarantee;
	return fee;
}