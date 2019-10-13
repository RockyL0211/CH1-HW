#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	printf("number\tsquare\tcube\n");
	for (int i = 0; i < 11; i++)
	{	
		int squi, cubi;
		squi = i * i;
		cubi = i * i * i;
		printf("%d\t%d\t%d\n", i, squi, cubi);
	}
	system("pause");
	return 0;
}