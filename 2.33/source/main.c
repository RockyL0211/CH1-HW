#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float totalm, gascostpgal, avgmpgal, parkfee, tolls, total;
	printf("Enter total miles driven per day: ");
	scanf_s("%f", &totalm);
	printf("Enter cost per gallon of gasoline.");
	scanf_s("%f", &gascostpgal);
	printf("Enter average miles per day: ");
	scanf_s("%f", &avgmpgal);
	printf("Enter parking fees per day: ");
	scanf_s("%f", &parkfee);
	printf("Enter tolls per day: ");
	scanf_s("%f", &tolls);
	total = tolls + parkfee + (totalm / parkfee) * avgmpgal;
	printf("Your cost per day of driving to work is %f.\n", total);
	system("pause");
	return 0;
}