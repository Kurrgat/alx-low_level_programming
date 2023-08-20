#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Return: empty output
 */

void times_table(void)
{
	int x, y, z, i, d;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
				if (z > 9)
				{
					i = z % 10;
					d = (z - i) / 10;
					_putchar(44);
					_putchar(32);
					_putchar(d + '0');
					_putchar(i + '0');
				}
				else
				{
					if (y != 0)
					{
						_putchar(44);
						_putchar(32);
						_putchar(32);
					}
					_putchar(z + '0');
				}
		}
		_putchar('\n');
	}
}
