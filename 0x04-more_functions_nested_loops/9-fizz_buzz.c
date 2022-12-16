#include<stdio.h>
int main()
{
	int i;
		for(i = 1; i <= 100; i++)
		{
			if(i >= 5 && i % 3 == 0 && i % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if(i >= 5 && i % 5 == 0)
			{
				printf("Buzz");
			}
			else if(i >= 3 && i % 3 == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				printf("%d",i);
			}
			printf(" ");
		}
		return (0);
}

