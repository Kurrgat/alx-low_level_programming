#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a char.
 * @separator: The separator string.
 * @arg: The char to print.
 */

void print_char(const char *separator, va_list arg)
{
	printf("%s%c", separator, va_arg(arg, int));
}

/**
 * print_int - Prints an int.
 * @separator: The separator string.
 * @arg: The int to print.
 */

void print_int(const char *separator, va_list arg)
{
	printf("%s%d", separator, va_arg(arg, int));
}

/**
 * print_float - Prints a float.
 * @separator: The separator string.
 * @arg: The float to print.
 */

void print_float(const char *separator, va_list arg)
{
	printf("%s%f", separator, va_arg(arg, double));
}

/**
 * print_string - Prints a string (or "(nil)" if NULL).
 * @separator: The separator string.
 * @arg: The string to print.
 */

void print_string(const char *separator, va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		printf("%s(nil)", separator);
	else
		printf("%s%s", separator, str);
}

/**
 * print_all - Prints anything based on a format string.
 * @format: A list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	unsigned int i = 0;
	char format_char;

	va_start(args, format);

	while (format && format[i])
	{
		format_char = format[i];
		switch (format_char)
		{
			case 'c':
				print_char(separator, args);
				break;
			case 'i':
				print_int(separator, args);
				break;
			case 'f':
				print_float(separator, args);
				break;
			case 's':
				print_string(separator, args);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
