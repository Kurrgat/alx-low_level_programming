#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings (or NULL if none)
 * @n: The number of strings passed to the function
 * @...: The strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/*Print separator if it's not NULL and it's not the last string*/
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
