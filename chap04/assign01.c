/*
 ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment01
 ���� : ������ �ӷ��� �Ǽ��� �Է¹޾� � �������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
        ������ kg����, �ӷ��� m/s ������ �Է¹޴´�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.03
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMotionEnergy(double weight, double velocity);
int assignment0401(void);


int main(void)
{
	assignment0401();

	return 0;
}

double getMotionEnergy(double weight, double velocity)
{
	double E = 0.5 * weight * velocity * velocity;
	return E;
}

int assignment0401(void)
{
	double weight = 0, velocity = 0;
	printf("����(kg)? ");
	scanf("%lf", &weight);
	printf("�ӷ�(m/s)? ");
	scanf("%lf", &velocity);
	printf("�������: %.2lf J", getMotionEnergy(weight, velocity));
	return;
}
