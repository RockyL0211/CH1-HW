#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float BMI, weight, height;
	int CM;
	printf("If you want to use enter your weight in Ponunds and height in Inches, please enter 0\n");
	printf("If you want to use enter your weight in Kilograms and height in Meters, please enter 1\n");
	scanf_s("%d", &CM);
	printf("Enter your weight: ");
	scanf_s("%f", &weight);
	printf("Enter your height: ");
	scanf_s("%f", &height);
	if (CM == 0)
	{
		BMI = weight / (height * height) * 703;
	}
	else
	{
		BMI = weight / (height * height);
	}
	printf("Your BMI is %f.\n", BMI);
	if (BMI >= 25)
	{
		if (BMI >= 30)
		{
			printf("You are obese.\n");
		}
		else
		{
			printf("You are overwight.\n");
		}
	}
	else
	{
		if (BMI <= 18.5)
		{
			printf("You are underwight.\n");
		}
		else
		{
			printf("You are Normal.\n");
		}
	}
	system("pause");
	return 0;
}