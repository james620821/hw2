#include<stdio.h>
#include<math.h>

int main(void)
{
	double a=.1;
	double b = 5000.0;
	double c;
	int i, j;

	printf("%4s%21s\n","year","Amount on deposit");

	for (i = 0;i < 5;i++)
	{
		printf("rate %.3f\n",a);

		for (j = 1; j <=15; j++)
		{
			c = b*pow(1 + a, j);
			printf("%4d%21.2f\n",j,c);
		}
		a = a + 0.005;
		printf("\n");
	}
	system("pause");

}