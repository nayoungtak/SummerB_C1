/*
 파일명: Core C Programming 2nd Edition Chap04 Programming Assignment01
 내용 : 질량과 속력을 실수로 입력받아 운동 에너지를 구하는 프로그램을 작성하시오.
        질량은 kg단위, 속력은 m/s 단위로 입력받는다.
 작성자 : 나영탁
 날짜 : 2025.07.03
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double getMotionEnergy(double weight, double velocity);
int assignment0401(void);


int main(void)
{
	assignment0401();

	return 0;
}

double getMotionEnergy(double weight, double velocity)
{
	double E = 0.5 * weight * velocity * velocity;
	return E;
}

int assignment0401(void)
{
	double weight = 0, velocity = 0;
	printf("질량(kg)? ");
	scanf("%lf", &weight);
	printf("속력(m/s)? ");
	scanf("%lf", &velocity);
	printf("운동에너지: %.2lf J", getMotionEnergy(weight, velocity));
	return;
}
