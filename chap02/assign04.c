/*
 ���ϸ� : Core C Programming 2nd Edition Chap02 Proframming Assignment04
 ���� : �ð��� ��, ��, �ʷ� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.01
 ���� : v1.0
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

	printf("��? ");
	scanf("%d", &hour);

	printf("��? ");
	scanf("%d", &minute);

	printf("��? ");
	scanf("%d", &second);

	printf("�Է��� �ð��� %02d:%02d:%02d�Դϴ�.", hour, minute, second);

	return;
}
