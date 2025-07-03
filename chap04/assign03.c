/*
 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment03
 내용 : 질량과 부피를 실수로 입력받아 밀도를 구하는 프로그램을 작성하시오.
		질량은 g단위로 입력받고, 부피는 cm^3단위로 입력받는다.
 작성자 : 나영탁
 날짜 : 2025.07.03
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0403(void);
double DensityCalculation(double g, double cm3);


int main(void)
{
	assignment0403();
	return 0;
}

int assignment0403(void)
{
	double g = 0.0;
	double cm3 = 0.0;
	
	printf("질량(g)? ");
	scanf("%lf", &g);
	printf("부피(세제곱센티미터)? ");
	scanf("%lf", &cm3);

	printf("밀도: %.6lf", DensityCalculation(g, cm3));

	return 0;
}

double DensityCalculation(double g, double cm3)
{
	return g / cm3;
}