#include <unistd.h>

/**
 * _putchar - a program that prints _putchar
 * @c : The character to print
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
