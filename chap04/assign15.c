/*
 ���ϸ�: Core C Programming 2nd Edition Chap04 Programming Assignment15
 ���� : ȯ������������ 1.75%�� ������ �ִٰ� �����ϰ� ��-�޷� �Ÿű������� ȯ�������(%)�� �Է¹޾� �޷��� �� ��
		 ����Ǵ� ȯ���� �����ϰ�, �����ϰ��� �ϴ� �޷��� ������ �Է¹޾Ƽ� �� ���� �ش��ϴ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 �ۼ��� : ����Ź
 ��¥ : 2025.07.03
 ���� : v1.0
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0415(void);
double ExchangR_W_B_Dollars(double T_B_R_, double P_E_R_);
double CalculationOfDollars(double usd, double ER);


int main(void)
{
	assignment0415();
	return 0;
}

int assignment0415(void)
{
	double T_B_R_ = 0, P_E_R_ = 0, usd = 0;
	printf("��/�޷� �Ÿű�����? ");
	scanf("%lf", &T_B_R_);

	printf("ȯ�������(0~100%)? ");
	scanf("%lf", &P_E_R_);

	double ER = ExchangR_W_B_Dollars(T_B_R_, P_E_R_);
	printf("�޷� �� �� ȯ���� %lf�Դϴ�\n", ER);

	printf("������ �޷�(USD)? ");
	scanf("%lf", &usd);

	double KRW = CalculationOfDollars(usd, ER);
	printf("USD %.2lf �춧 ==> KRW %.2lf\n", usd, KRW);

	return 0;
}

double ExchangR_W_B_Dollars(double T_B_R_, double P_E_R_)
{
	double ER1 = T_B_R_ + (T_B_R_ * (1.75 / 100) * (1.0 - P_E_R_ / 100.0));
	return ER1;
}

double CalculationOfDollars(double usd, double ER)
{
	double KRW1 = usd * ER;
	return KRW1;
}