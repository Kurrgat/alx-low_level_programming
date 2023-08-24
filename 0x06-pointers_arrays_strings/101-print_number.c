#include "main.h"

/**
 * * print_number - prints an integer
 * @n:integer to be printed
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < 0)
	{
		putchar('-');
		n1 = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n1 / 10);
	}
	putchar((n % 10) + '0');
}
