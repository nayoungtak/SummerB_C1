/*
 ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment17
 ���� : 7��° ��Ʈ�� 1�� ��, 15��° ��Ʈ�� 1�� ��, 13��° ��Ʈ�� 1�� ��, 31��° ��Ʈ�� 1�� ���� ���ؼ�
		 16������ 10������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.03
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0417(void);


int main(void)
{
	assignment0417();
	return 0;
}

double assignment0417(void)
{
	unsigned int num1, num2, num3, num4;
	num1 = 1 << 7;
	num2 = 1 << 15;
	num3 = 1 << 23;
	num4 = 1 << 31;

	printf("7�� ��Ʈ�� 1�� ��: %06X %d\n", num1, num1);
	printf("15�� ��Ʈ�� 1�� ��: %06X %d\n", num2, num2);
	printf("23�� ��Ʈ�� 1�� ��: %06X %d\n", num3, num3);
	printf("31�� ��Ʈ�� 1�� ��: %06X %d\n", num4, num4);

	return 0;
}

