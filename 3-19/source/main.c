#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c;
	int e;
	printf_s("Enter loan principal(-1 to end): ");
	scanf_s("%f",&a);
	while (a != -1)
	{
		printf_s("Enter interest rate: ");
		scanf_s("%f",&b);
		printf_s("Enter term of the loan in days: ");
		scanf_s("%d",&e);
		c = a*b*e / 365;
		printf_s("The interest charge is $%.2f\n",c);
		printf_s("                                 \n");
		printf_s("Enter loan principal(-1 to end): ");
		scanf_s("%f", &a);
	}
	system("pause");
}