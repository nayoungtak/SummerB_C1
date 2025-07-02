/*
 파일명 : Core C Programming 2nd Edition Chap02 Proframming Assignment04
 내용 : 시간을 시, 분, 초로 입력받아서 출력하는 프로그램을 작성하시오.
 작성자 : 나영탁
 날짜 : 2025.07.01
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0204(void);


int main(void)
{
	Assignment0204();

	return 0;
}

void Assignment0204(void)
{
	int hour;
	int minute;
	int second;

	printf("연? ");
	scanf("%d", &hour);

	printf("월? ");
	scanf("%d", &minute);

	printf("일? ");
	scanf("%d", &second);

	printf("입력한 시간은 %02d:%02d:%02d입니다.", hour, minute, second);

	return;
}
