/*
 ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment18
 ���� : 17���� ���� ��� ���� ���α׷��� ���� �ð��� 0�� �Էµ� ������ �ݺ� �����ϵ��� �����Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.07
 ���� : v1.0
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double assignment0518(void);
int CalculationParkingFees(int time);


int main(void)
{
	assignment0518();
	return 0;
}

double assignment0518(void)
{
	int time = 0;
	while (1)
	{
		printf("���� �ð�(��)? ");
		scanf_s("%d", &time);
		if (time == 0)
		{
			break;
		}
		if (time > 1440)
		{
			printf("���� �ð��� �ִ� 24�ð�(1440��)�� ���� �� �����ϴ�.\n");
			continue;
		}
		printf("���� ���: %d��\n", CalculationParkingFees(time));

	}

	return 0;
}

int CalculationParkingFees(int time)
{

	int fee = 0, min = 0;

	if (time <= 30)
	{
		fee = 2000;
	}
	else
	{
		min = time - 30;
		fee = 2000 + (min / 10) * 1000;
		if ((min % 10) != 0)
		{
			fee += 1000;
		}
	}
	if (fee > 25000)
	{
		fee = 25000;
	}
	return fee;
}