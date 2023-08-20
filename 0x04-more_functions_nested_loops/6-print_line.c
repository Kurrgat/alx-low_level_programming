#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: Number of times
 * Return: Always 0
 */

void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
