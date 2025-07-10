/*
 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment19
 내용 : 영화배우 하정우씨는 영화 출연료를 전액 고정 출연료로 받을지 기본 출연료와 러닝 개런티로 받을지 고민하고 있다.
		러닝 개런티는 보통 손익 분기점 관객 수를 초가하는 경우 관객 1인당 얼마로 계약을 하게 된다.
		기본 출연료, 손익 분기점 관객 수, 관객 1인당 러닝 개런티를 입력받아서 예상 출연료를 계산해서 출력하는 프로그램을 작서하시오.
		예상 관객 수가 백만명, 2백만명, ~~~, 15백만명일 때의 예상 출연료를 구해서 출력한다.
 작성자 : 나영탁
 날짜 : 2025.07.07
 버전 : v1.0
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

	printf("기본 출연료? ");
	scanf("%d", &basic);
	printf("손익 분기점 관객 수? ");
	scanf("%d", &breakeven);
	printf("관객 1인당 러닝 개런티? ");
	scanf("%d", &guarantee);

	for (int i = 1; i <= 15; i++)
	{
		printf("관객 %d명 일 때 예상 출연료: %d원\n", i * 1000000, PerformanceFeeCalculation(basic, breakeven, guarantee, (i * 1000000)));
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