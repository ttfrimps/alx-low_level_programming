#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 *main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "My School";

	void rev_string(char *s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
