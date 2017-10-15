#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float b, c, d, e, f;
	printf("Enter account number(-1 to end): ");
	scanf("%d", &a);
	while (a != -1)
	{
		printf("Enter beginning balance: ");
		scanf("%f", &b);
		printf("Enter total charges: ");
		scanf("%f", &c);
		printf("Enter total credits: ");
		scanf("%f", &d);
		printf("Enter credit limit: ");
		scanf("%f", &e);
		f = b + c - d;
		if (f > e)
		{
			printf("Account:	%d\n", a);
			printf("Credit limit:	%f\n", e);
			printf("Balance:	%f\n", f);
			printf("Credit Limit Exceeded.\n");
		}
		printf("Enter account number(-1 to end): ");
		scanf("%d", &a);
	}

	system("pause");
}
