#include<stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 multiples print Buzz instead of the number
 * 3 & 5 multiples print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
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
				printf("Fizz");
			}
			else
			{
				printf("%d",i);
			}
			printf(" ");
		}
		printf("\n");
		return (0);
}

