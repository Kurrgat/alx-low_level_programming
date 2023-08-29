#include "main.h"

/**
 * _memcpy -  function that copies memory area
 * @dest: area where the bytes are copied to
 * @src: area where the bytes are copied from
 * @n: no of bytes to copy
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
