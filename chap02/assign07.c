/*
 ���ϸ�: Core C Programming 2nd Edition Chap02 Proframming Assignment07
 ���� : Ŀ�� ������(S,T,G)�� �ֹ� ������ �Է¹޾� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
        Ŀ�� ������� S,T,G ������ ���� �� �ϳ��� �Է¹޴´�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.01
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0207(void)
{
	char size;
	int what;

	printf("Ŀ�� ������(S,T,G)�� ���� ����? ");
	scanf("%c %d", &size, &what);

	printf("%c ������ %d���� �ֹ��մϴ�.\n", size, what);

	return;
}

int main(void)
{
	Assignment0207();

	return 0;
}