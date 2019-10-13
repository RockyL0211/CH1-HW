#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int number;
	printf("Enter an integer: ");
	scanf_s("%d", &number, 4);

	if (number % 2 == 0) 
	{
		printf("%d is even.\n", number);
	}
	else 
	{
		printf("%d is odd.\n", number);
	}

	system("pause");
	return 0;
}