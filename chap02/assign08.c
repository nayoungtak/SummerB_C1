/*
 파일명: Core C Programming 2nd Edition Chap02 Proframming Assignment08
 내용 : 실수 2개를 입력받아서 합과 차를 구해서 출력하는 프로그램을 작성하시오.
 작성자 : 나영탁
 날짜 : 2025.07.01
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0207(void)
{
	double a;
	double b;

	printf("실수 2개? ");
	scanf("%lf %lf", &a, &b);

	printf("%.6lf + %.6lf = %.6lf\n", a, b, a + b);
	printf("%.6lf - %.6lf = %.6lf\n", a, b, a - b);

	return;
}

int main(void)
{
	Assignment0207();

	return 0;
}