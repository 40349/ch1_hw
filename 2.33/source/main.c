#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int  gas_fee,  parking_fee, tolls;
	float miles, gas_miles, total;
	printf("input total miles driven per day :");
	scanf_s("%d", &miles);
	printf("input cost per gallon of gasoline :");
	scanf_s("%d", &gas_fee);
	printf("input average miles per gallon :");
	scanf_s("%d", &gas_miles);
	printf("input parking fee per day :");
	scanf_s("%d", &parking_fee);
	printf("input tolls per day :");
	scanf_s("%d", &tolls);
	total = miles / gas_miles * gas_fee + parking_fee + tolls;
	printf("you cost %.2f per day", total);
}