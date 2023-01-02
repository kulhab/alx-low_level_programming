#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: the byte to be filled
 * @n: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
		i = 0;
		while (i < n)
		{
			s[i] = b;
			if(i % 10)
			{
			}
			if (!(i % 10) && i)
			{
			}
			i++;
		}
		return s;
}
