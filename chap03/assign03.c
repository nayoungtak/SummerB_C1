/*
 ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment03
 ���� : ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
        ������ kg����, ���̴� m ������ �Է¹޴´�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double GetPotentialEnergy(int weight, int height);
void Assignment0303(void);


int main(void)
{
	Assignment0303();

	return 0;
}

double GetPotentialEnergy(int weight, int height)
{
	double n = 9.8 * weight * height;
	return n;
}

void Assignment0303(void)
{
	int weight = 0, height = 0;
	printf("����(kg)? ");
	scanf("%d", &weight);
	printf("����(m)? ");
	scanf("%d", &height);
	printf("��ġ������: %lf J", GetPotentialEnergy(weight, height));
}

