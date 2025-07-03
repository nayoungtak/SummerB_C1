/*
 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment04
 내용 : 용매의 질량과 용질의 질량을 정수로 입력받아 용액의 퍼센트 농도를 구하는 프로그램을 작성하시오.
		용매의 질량과 용질의 질량은 g 단위로 입력받는다.
 작성자 : 나영탁
 날짜 : 2025.07.03
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0404(void);
double ConcentrationCalculation(double solvent, double solute);



int main(void)
{
	assignment0404();
	return 0;
}

int assignment0404(void)
{
	double solvent = 0.0;
	double solute = 0.0;

	printf("용매(g)? ");
	scanf("%lf", &solvent);
	printf("용질(g)? ");
	scanf("%lf", &solute);

	printf("농도: %.2lf ", ConcentrationCalculation(solvent, solute));

	return 0;
}

double ConcentrationCalculation(double solvent, double solute)
{
	return (solute / (solvent + solute)) * 100;
}