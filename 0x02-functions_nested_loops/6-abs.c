#include "main.h"

/**
 * main - compute absolute value of integer
 * @n: parameter
 * Return: absolute value of number
 */
int _abs(int r)
{
	if (r < 0)
		r = -r;
	return (r);
}
