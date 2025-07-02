/*
 파일명: Core C Programming 2nd Edition Chap03 Programming Assignment08
 내용 : 길이를 야드(yd)로 입력받아 미터(m)로 변환해서 출력하는 프로그램을 작성하시오. 1yd는 0.9144m에 해당된다.
 작성자 : 나영탁
 날짜 : 2025.07.02
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0308(void);
double ChangeYdToM(double yd);


int main(void)
{
	Assignment0308();
	return 0;
}

void Assignment0308(void)
{
	double yd = 0.0;
	printf("길이(yd)? ");
	scanf("%lf", &yd);

	printf("%.lf yd = %.6lf m", yd, ChangeYdToM(yd));

	return;
}

double ChangeYdToM(double yd)
{
	return yd * 0.9144;
}