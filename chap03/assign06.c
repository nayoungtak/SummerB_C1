/*
 ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment06
 ���� : ����Ʈ�� ������ ��������(m^2)�� �Է¹޾� �� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
        1m^2�� 0.3025�� �ش��Ѵ�. ���α׷��� �ۼ��� �� �̸� �ִ� ����� �̿��غ���.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0306(void)
{
	float m = 0.0;
	double P = 0.0;

	printf("����Ʈ�� ����(��������)?");
	scanf("%f", &m);

	P = m * 0.3025;

	printf("%.2f �������� = %.2f ��", m, P);

	return;
}

int main(void)
{
	Assignment0306();
	return 0;
}