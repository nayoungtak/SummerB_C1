/*
 ���ϸ�: Core C Programming 2nd Edition Chap02 Proframming Assignment05
 ���� : �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷����� �ۼ��Ͻÿ�. �����Դ� �Ǽ��� �Է¹�����, �Ҽ��� ���� 2�ڸ������� ����Ѵ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0205(void)
{
	float weight;

	printf("������? ");
	scanf("%f", &weight);

	printf("�Է��� �����Դ� %.2fkg�Դϴ�.\n", weight);

	return;
}

int main(void)
{
	Assignment0205();

	return 0;
}