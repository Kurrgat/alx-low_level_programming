#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to print in binary.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	print_binary(n >> 1); /*Right shift n by 1*/
	_putchar((n & 1) + '0'); /*Print the least significant bit*/
}