/*
 파일명: Core C Programming 2nd Edition Chap03 Programming Assignment11
 내용 : 원/달러 환율과 원화를 입력받아 몇 달러인지 출력하는 프로그램을 작성하시오.
 작성자 : 나영탁
 날짜 : 2025.07.02
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0311(void);


int main(void)
{
	Assignment0311();
	return 0;
}

void Assignment0311(void)
{
	double krw = 0.0, H = 0.0;

	printf("KRW? ");
	scanf("%lf", &krw);
	printf("원/달러 환율? ");
	scanf("%lf", &H);

	double usd = krw / H;

	printf("KRW %.lf = USD %.2f", krw, usd);
	return;
}
