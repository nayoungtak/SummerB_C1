/*
 ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment17
 ���� : ���� �ð��� ������ �Է¹޾Ƽ� ���� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 		 ���� ����� ���� 30���� 2000, �� ���Ĵ� 10�д� 1000�������� ����ϸ�, �Ϸ� �ִ� 25000���� ���� �� ����.
		 ���� �ð��� 24�ð��� ���� ���� ���ٰ� �����Ѵ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.07
 ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0517(void);

int main(void)
{
	assignment0517();
	return 0;
}

double assignment0517(void)
{
	int time = 0, fee = 0, min = 0;

	printf("���� �ð�(��)? ");
	scanf("%d", &time);
	if (time <= 30)
	{
		fee = 2000;
		printf("���� ���: %d��\n", fee);
	}
	else
	{
		min = time - 30;
		fee = 2000 + (min / 10) * 1000;
		if ((min % 10) != 0)
		{
			fee += 1000;
		}
		printf("���� ���: %d��\n", fee);
	}

	return 0;
}