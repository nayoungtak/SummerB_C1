/*
 ���ϸ�: Core C Programming 2nd Edition Chap05 Programming Assignment16
 ���� : ������ ����� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
		���� ������ �Է¹ް� ����� �� ���� ������� �Է¹޾� ������ ����� �Է¹��� ������ŭ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.07
 ���� : v1.0
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

	printf("���� ����? ");
	scanf_s("%d", &integer);
	printf("����� ����? ");
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