#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int x, y;
	printf("Enter two integers, check the first is a multiple of the second.\n");
	printf("Enter frist integers: ");
	scanf_s("%d", &x);
	printf("Enter second integers: ");
	scanf_s("%d", &y);
	if (y == 0)
	{
		printf("Integer can not division by zero.\n");

	}
	else
	{
		if (x % y == 0)
		{
			printf("%d is a multiple of %d.\n", x, y );
		}
		else
		{
			printf("%d is not a multiple of %d.\n", x, y);
		}
	}
	
	system("pause");
	return 0;
}