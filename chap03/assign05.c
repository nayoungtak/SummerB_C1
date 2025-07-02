/*
 파일명: Core C Programming 2nd Edition Chap03 Programming Assignment05
 내용 : 길이를 인치(inch)로 입력받아 센티미터(cm)로 변환하는 프로그램을 작성하시오. 1 inch는 2.54cm에 해당된다.
 작성자 : 나영탁
 날짜 : 2025.07.02
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0305(void);
double ChangeInchToCm(double inch);


int main(void)
{
	Assignment0305();

	return 0;
}

void Assignment0305(void)
{
	double inch = 0;

	printf("길이(inch)? ");
	scanf("%lf", &inch);

	printf("%.6lf inch = %.6lf cm", inch, ChangeInchToCm(inch));

	return;
}

double ChangeInchToCm(double inch)
{
	return 	inch * 2.54;
}
