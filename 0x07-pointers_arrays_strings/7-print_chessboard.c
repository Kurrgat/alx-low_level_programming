#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard
 * @a: array that contains the board elements
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; a[i][7]; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}

}
