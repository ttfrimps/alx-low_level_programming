#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - function that returns the length of a string
 *
 * Return: Always 0.
 */
int main()
{
	char *x = Hello World";
	char *s = &x;

	int len;

	for(; *s != '\0' ; s++)
	{
		len +=1;
		s++;
	}
	printf("%d\n", strlen(x));
	return (0);
}
