#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c;
	printf("input three numbers:");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		if (b > c)
		{
			printf("the largest:%d\n", a);
			printf("the smallest:%d\n", c);
		}
		if (b < c)
		{
			if (a > c)
			{
				printf("the largest:%d\n", a);
				printf("the smallest:%d\n", b);
			}
			if (a < c)
			{
				printf("the largest:%d\n", c);
				printf("the smallest:%d\n", b);
			}
		}
	}
	if (a < b)
	{
		if (b < c)
		{
			printf("the largest:%d\n", c);
			printf("the smallest:%d\n", a);
		}
		if (b > c)
		{
			if (a > c)
			{
				printf("the largest:%d\n", b);
				printf("the smallest:%d\n", c);
			}
			if (a < c)
			{
				printf("the largest:%d\n", b);
				printf("the smallest:%d\n", a);
			}
		}
	}
	system("pause");
	return 0;
}