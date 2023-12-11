#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that locates a character in a string
 * @c: character targeted
 * @s: string targeted
 * Return: a pointer to the first occurrence of character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
