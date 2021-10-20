#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	int i=1;
	printf("number\tsqure\tcube\n");
	for (i = 1; i < 11; i++)
	{
		printf("%d\t%d\t%d\n", i, i*i, i*i*i);
	}
	system("pause");
	return 0;
}