/*
 ���ϸ�: Core C Programming 2nd Edition Chap02 Proframming Assignment10
 ���� : ������ 8����, 10����, 16���� �� �ϳ��� �Է¹޾� 8����, 10����, 16����
        ���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 8������ �Է��Ҷ��� �տ� 0�� �ٿ��� 012ó�� �Է��ϰ�,
        16������ �Է��� ���� �տ� 0x�� �ٿ��� 0x12ó�� �Է��Ѵ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.01
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0210(void)
{
	int a;
	a = 0;

	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n");
	scanf("%i", &a);

	printf("8����: 0%o\n", a);
	printf("10����: %d\n", a);
	printf("16����: %#x\n", a);

	return;
}

int main(void)
{
	Assignment0210();

	return 0;
}