/*
 ���ϸ� : Core C Programming 2nd Edition Chap02 Proframming Assignment03
 ���� : ��¥�� ��, ��, �Ϸ� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, ��, ���� ������ �Է¹޴´�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.01
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0203(void)
{
	int  year;
	int war;
	int day;

	printf("��? ");
	scanf("%d", &year);

	printf("��? ");
	scanf("%d", &war);

	printf("��? ");
	scanf("%d", &day);

	printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.", year, war, day);

	return;
}

int main(void)
{
	Assignment0203();

	return 0;
}