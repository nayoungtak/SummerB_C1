/*
 ���ϸ�: Core C Programming 2nd Edition Chap03 Programming Assignment01
 ���� : �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷����� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.02
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0301(void)
{
	int s = 0;

	printf("�� ���� ���� ? ");
	scanf("%d", &s);

	printf("���簢���� ����: %d\n", s * s);
	printf("���簢���� �ѷ�: %d\n", s * 4);

}

int main(void)
{
	Assignment0301();

	return 0;
}