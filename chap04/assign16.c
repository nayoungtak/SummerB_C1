/*
 ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment16
 ���� : 0~255������ ���� red, green, blue�� ������ 3�� �Է¹޾Ƽ� RGB������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		 RGB ������ ����� �� ����Ʈ ������ ���� �˾ƺ��� ������ 16������ ����Ѵ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.03
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0416(void);


int main(void)
{
	assignment0416();
	return 0;
}

int assignment0416(void)
{
	unsigned char red = 0, green = 0, blue = 0;
	int rgb_color = 0;

	printf("red? ");
	scanf("%hhu", &red);
	printf("green? ");
	scanf("%hhu", &green);
	printf("blue? ");
	scanf("%hhu", &blue);

	rgb_color = red | green << 8 | blue << 16;

	printf("RGB Ʈ���÷�: %06X", rgb_color);

	return 0;
}

