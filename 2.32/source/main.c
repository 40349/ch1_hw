#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float height, weight, bmi;
	printf("input height(m):");
	scanf_s("%f", &height);
	printf("input weight(kg):");
	scanf_s("%f", &weight);
	bmi = (weight / (height*height));
	printf("BMI:%.2f\n", bmi);
	printf("\n");
	printf("BMI VALUES\n");
	printf("underweight: < 18.5\n");
	printf("normal: 18.5 - 23.9\n");
	printf("overweight: 24 - 27.9\n");
	printf("obese: >= 28\n");
	system("pause");
	return 0;
}