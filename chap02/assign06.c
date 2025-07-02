/*
 파일명: Core C Programming 2nd Edition Chap02 Proframming Assignment06
 내용 : 옷 사이즈를 선택하게 하고 선택된 사이즈를 출력하는 프로그램을 작성하시오. 옷 사이즈는 S, M, L 세가지 문자중 하나로 입력받는다.
 작성자 : 나영탁
 날짜 : 2025.07.01
 버전 : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0205(void)
{
	char size;

	printf("옷 사이즈(S,M,L)? ");
	scanf("%c", &size);

	if (size != 'S' && size != 'M' && size != 'L')
	{
		printf("잘못 선택했습니다.");
		return 0;
	}
	printf("%c 사이즈를 선택했습니다.\n", size);

	return;
}

int main(void)
{
	Assignment0205();

	return 0;
}