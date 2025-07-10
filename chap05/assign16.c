/*
 파일명: Core C Programming 2nd Edition Chap05 Programming Assignment16
 내용 : 정수의 배수를 구해서 출력하는 프로그램을 작성하시오.
		양의 정수를 입력받고 배수를 몇 개나 출력할지 입력받아 정수의 배수를 입력받은 개수만큼 출력하는 프로그램을 작성하시오.
 작성자 : 나영탁
 날짜 : 2025.07.07
 버전 : v1.0
*/


#include <stdio.h>

int multiple[] = { 0 };

double assignment0516(void);
int getMultiple(int integer, int num);
void printMultiple(int num);


int main(void)
{
	assignment0516();
	return 0;
}

double assignment0516(void)
{
	int integer = 0;
	int num = 0;

	printf("양의 정수? ");
	scanf_s("%d", &integer);
	printf("배수의 개수? ");
	scanf_s("%d", &num);

	getMultiple(integer, num);
	printMultiple(num);

	return 0;
}

int getMultiple(int integer, int num)
{
	for (int i = 0; i < num; i++)
	{
		multiple[i] = integer * (i + 1);
	}

	return 0;
}

void printMultiple(int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%d ", multiple[i]);
	}
}