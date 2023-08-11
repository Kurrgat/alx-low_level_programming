#include <stdio.h>
/**
 * main - A program that prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	int x;

	c = 'a';
	x = '0';
	while
		(x < 10) {
			putchar(x + '0');
			x++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
