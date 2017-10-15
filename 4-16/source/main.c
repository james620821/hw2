#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	printf("(A)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("(B)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= i; j--)
		{
			printf("%s","*");
		}
		printf("\n");
	}

	printf("(C)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s"," ");
		}
		for ( j=10;j>=i;j--)
		{
			printf("%s","*");
		}
		printf("\n");
	}

	printf("(D)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= i; j--)
		{
			printf("%s"," ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%s","*");
		}
		printf("\n");
	}
	
	system("pause");
}