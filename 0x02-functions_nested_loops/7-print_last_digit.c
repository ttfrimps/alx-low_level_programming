#include "main.h"

/**
 * print_last_digit - prints last digits of a number
 *@r: the passed args
 * Return: last digits of a number
 */
int print_last_digit(int r)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (n % 10);
