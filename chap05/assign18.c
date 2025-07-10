/*
 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment18
 내용 : 17번의 주차 요금 정산 프로그램을 주차 시간에 0이 입력되 때까지 반복 수행하도록 수정하시오.
 작성자 : 나영탁
 날짜 : 2025.07.07
 버전 : v1.0
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
		printf("주차 시간(분)? ");
		scanf_s("%d", &time);
		if (time == 0)
		{
			break;
		}
		if (time > 1440)
		{
			printf("주차 시간은 최대 24시간(1440분)을 넘을 수 없습니다.\n");
			continue;
		}
		printf("주차 요금: %d원\n", CalculationParkingFees(time));

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