#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: An array of command line argument strings
 * Return: 0 on success, or exit with a status code on error
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func_ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);  /*Return an error status code*/
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	func_ptr = get_op_func(argv[2]);

	if (func_ptr == NULL)
	{
		printf("Error\n");
		return (99);  /*Return an error status code*/
	}

	result = func_ptr(num1, num2);
	printf("%d\n", result);

	return (0);
}
