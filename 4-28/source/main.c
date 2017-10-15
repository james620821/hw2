#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int a,c,f,g,x;
	int b = 5000;
	int e = 133;
	double d;
	printf("Enter your pay code: ");
	scanf("%d",&a);
	switch (a)
	{
	case 1:
		printf("your salary: $%d\n",b);
		break;

	case 2:
		printf("Enter tne working hours: ");
		scanf("%d",&c);
		if (c > 40)
		{
			printf("your salary: $%.2f\n", (40 + (c - 40)*1.5) * 133);
		}
		else
		{
			printf("your salary: $%d\n", c*133);
		}
		break;

	case 3:
		printf("Enter tne gross weekly sales: $");
		scanf("%d", &f);
		d = 250 + f*0.057;
		printf("your salary: $%.3f\n", d);
		break;
	case 4:
		printf("Enter tne terms you produce: ");
		scanf("%d", &g);
		x = 1 * g;
		printf("your salary: $%d\n", x);
		break;
	default:
		printf("Enter tne incorrect pay code.");
	}
	system("pause");
}
