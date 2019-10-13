#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num1, num2, num3;

	printf("Enter first integer: ");
	scanf_s("%d", &num1);
	printf("Enter second integer: ");
	scanf_s("%d", &num2);
	printf("Enter third integer: ");
	scanf_s("%d", &num3);

	if (num1 == num2 && num1 == num3)
	{
		printf("Please enter at least two diffrernt numbers.\n");
		system("pause");
		return 0;
	}

	if (num1 > num2 && num1 > num3)
	{
		printf("%d is the largest.\n", num1);
		if (num2 > num3)
		{
			printf("%d is the smallest\n", num3);
		}
		else
		{
			printf("%d is the smallest\n", num2);
		}
	}

	if (num2 > num1 && num2 > num3)
	{
		printf("%d is the largest.\n", num2);
		if (num1 > num3)
		{
			printf("%d is the smallest\n", num3);
		}
		else
		{
			printf("%d is the smallest\n", num1);
		}
	}

	if (num3 > num1 && num3 > num2)
	{
		printf("%d is the largest.\n", num3);
		if (num1 > num2)
		{
			printf("%d is the smallest\n", num2);
		}
		else
		{
			printf("%d is the smallest\n", num1);
		}
	}

	if (num1 == num2 && num1 > num3)
	{
		printf("%d is the largest.\n", num1);
		printf("%d is the smallest\n", num3);
	}
	else
	{
		printf("%d is the largest.\n", num3);
		printf("%d is the smallest\n", num1);
	}

	if (num1 == num3 && num1 > num2)
	{
		printf("%d is the largest.\n", num1);
		printf("%d is the smallest\n", num2);
	}
	else
	{
		printf("%d is the largest.\n", num2);
		printf("%d is the smallest\n", num1);
	}

	if (num2 == num3 && num1 > num2)
	{
		printf("%d is the largest.\n", num1);
		printf("%d is the smallest\n", num3);
	}
	else
	{
		printf("%d is the largest.\n", num3);
		printf("%d is the smallest\n", num1);
	}

	system("pause");
	return 0;
}