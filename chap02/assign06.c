/*
 ���ϸ�: Core C Programming 2nd Edition Chap02 Proframming Assignment06
 ���� : �� ����� �����ϰ� �ϰ� ���õ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. �� ������� S, M, L ������ ������ �ϳ��� �Է¹޴´�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.01
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0205(void)
{
	char size;

	printf("�� ������(S,M,L)? ");
	scanf("%c", &size);

	if (size != 'S' && size != 'M' && size != 'L')
	{
		printf("�߸� �����߽��ϴ�.");
		return 0;
	}
	printf("%c ����� �����߽��ϴ�.\n", size);

	return;
}

int main(void)
{
	Assignment0205();

	return 0;
}