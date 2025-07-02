/*
 파일명: Core C Programming 2nd Edition Chap03 Programming Assignment04
 내용 : 물체에 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오.
        힘의 크기는 N 단위로 입력받고, 이동한 거리는 m 단위로 입력받는다.
 작성자 : 나영탁
 날짜 : 2025.07.02
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0304(void);
double GetJ(double N, double m);


int main(void)
{
	Assignment0304();

	return 0;
}

void Assignment0304(void)
{
	double N = 0, m = 0;
	double J = 0.0;

	printf("힘(N)? ");
	scanf("%lf", &N);
	printf("이동거리(m)? ");
	scanf("%lf", &m);

	printf("일의 양: %.2f J", GetJ(N, m));

	return;
}

double GetJ(double N, double m)
{
	return 	N * m;
}
