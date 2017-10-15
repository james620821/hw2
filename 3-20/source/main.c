#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float b, c, d;
	printf("Enter # of hours worked(-1 to end): ");
	scanf("%d",&a);
	while (a != -1)
	{
		printf("Enter hourly rate of the worker($00.00): ");
		scanf("%f",&b);
		if (a > 40)
		{
			c = 40*b+(a - 40)*1.5*b;
			printf("Salary is $%.2f\n",c);
		}
		else
		{
			d = a*b;
			printf("Salary is $%.2f\n",d);
		}
		printf("                         \n");
		printf("Enter # of hours worked(-1 to end): ");
		scanf("%d", &a);
	}
	system("pause");
}
