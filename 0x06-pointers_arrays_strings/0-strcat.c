#include "main.h"
#include<stdio.h>
char *_strcat(char *dest, char *src)
{
	char s[20];
	char *ptr;
		int i=0;
	int j=0;
	while(dest[i] != '\0')
	{
	s[i]= dest[i];
	i++;
	}
	while(src[j] != '\0')
	{
		s[i]= src[j];
		j++;
		i++;
	}
	ptr= s;
	return (ptr);
}
