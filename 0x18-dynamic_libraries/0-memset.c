#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointed destination
 * @b: constant byte
 * @n: no of bytes to copy
 * Return:  a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
