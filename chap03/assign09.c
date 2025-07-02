/*
 파일명: Core C Programming 2nd Edition Chap03 Programming Assignment09
 내용 : 무게를 파운드(lb)로 입력받아 킬로그램(kg)으로 변환해서 출력하는 프로그램을 작성하시오. 1lb는 0.45359237kg에 해당한다.
 작성자 : 나영탁
 날짜 : 2025.07.02
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0309(void);
double ChangeLdToKg(double ld);


int main(void)
{
	Assignment0309();
	return 0;
}

void Assignment0309(void)
{
	double ld = 0.0;
	printf("무게(ld)? ");
	scanf("%lf", &ld);

	printf("%.lf ld = %.6lf kg", ld, ChangeLdToKg(ld));

	return;
}

double ChangeLdToKg(double ld)
{
	return ld * 0.45359237;
}