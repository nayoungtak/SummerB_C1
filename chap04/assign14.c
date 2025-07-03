/*
 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment14
 내용 : 기본 요금과 월 사용량(kWh)을 입력받아 전기 요금을 계산하는 프로그램을 작성하시오.
		사용량에 따른 요금은 190원/hWh이다.
 작성자 : 나영탁
 날짜 : 2025.07.03
 버전 : v1.0
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

	printf("기본 요금? ");
	scanf("%d", &Fare);
	printf("월 사용량(kWh)? ");
	scanf("%d", &Usage);

	printf("전기 요금: %d원 ", ElectricityBillCalculation(Fare, Usage));

	return 0;
}

int ElectricityBillCalculation(int Fare, int Usage)
{
	return Fare + Usage * 190;
}