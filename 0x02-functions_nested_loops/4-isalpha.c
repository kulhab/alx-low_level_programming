#include "main.h"
/**
 * _isalpha - check the code.
 * c -accept arguement
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
