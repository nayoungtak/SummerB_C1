/*
 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment02
 내용 : 화씨 온도('F)를 실수로 입력받아 섭씨 온도('C)로 변환해서 출력하는 프로그램을 작성하시오.
 작성자 : 나영탁
 날짜 : 2025.07.03
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double FahrenheitCelsius(double f);
int assignment0402(void);


int main(void)
{
	assignment0402();
	return 0;
}

double FahrenheitCelsius(double f)
{
	return (f - 32) * 5 / 9;
}

int assignment0402(void)
{
	double f = 0.0;
	printf("화씨온도? ");
	scanf("%lf", &f);

	printf("%.2lf F = %.2lf C", f, FahrenheitCelsius(f));
	return 0;
}