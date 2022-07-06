#include "main.h"

/**
 * main - compute absolute value of integer
 * @n: parameter
 * Return: absoolute value of number
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
