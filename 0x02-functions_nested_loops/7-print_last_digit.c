#include "main.h"
/**
 * print_last_digit - check the code
 * @n: single value input
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int digit;
	digit = n % 10;
	if (digit < 0)
	{
	digit = (-1 * digit);
	}
	_putchar(digit + '0');
	return (digit);
}
