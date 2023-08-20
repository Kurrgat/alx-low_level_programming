#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: The character to be checked
 * Return: returns 1 if it is uppercase , 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}
