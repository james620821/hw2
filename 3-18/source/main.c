#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c;
	printf("Enter sales in dollars(-1 to end): ");
	scanf("%f",&a);
	while (a != -1)
	{
		c = 200 + a*0.09;
		printf("salary is: %.2f\n", c);
		printf("Enter sales in dollars(-1 to end): ");
		scanf("%f", &a);
	}
	system("pause");
}
