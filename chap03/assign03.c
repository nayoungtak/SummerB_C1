/*
 파일명: Core C Programming 2nd Edition Chap03 Programming Assignment03
 내용 : 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램을 작성하시오.
        질량은 kg단위, 높이는 m 단위로 입력받는다.
 작성자 : 나영탁
 날짜 : 2025.07.02
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double GetPotentialEnergy(int weight, int height);
void Assignment0303(void);


int main(void)
{
	Assignment0303();

	return 0;
}

double GetPotentialEnergy(int weight, int height)
{
	double n = 9.8 * weight * height;
	return n;
}

void Assignment0303(void)
{
	int weight = 0, height = 0;
	printf("질량(kg)? ");
	scanf("%d", &weight);
	printf("높이(m)? ");
	scanf("%d", &height);
	printf("위치에너지: %lf J", GetPotentialEnergy(weight, height));
}

