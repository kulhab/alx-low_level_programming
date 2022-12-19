#include "main.h"
/**
 * print_rev - check the code
 * @s: pointer variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
		i = 0;
		while (s[i] != 0)
		{
			i++;
		}
		i = i - 1;
		while (i >= 0)
		{
			_putchar(s[i]);
			i--;
		}	
		_putchar('\n');
}
