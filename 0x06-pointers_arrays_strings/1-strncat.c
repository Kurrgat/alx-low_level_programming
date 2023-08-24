#include "main.h"

/**
 * _strncat - Concatenates two strings using at most an inputted no of bytes
 * from src
 * @dest: string to be appended upon
 * @src: string to be completed at end of dest
 * @n: The number of bytes fron src to be appended to dest
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
