#include <stdio.h>

/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	unsigned long long i = 1, j = 2, k;
	int count = 2;

	printf("%llu, %llu", i, j);

	while (count < 98)
	{
	k = i + j;
	printf(", %llu", k);
	i = j;
	j = k;
	count++;
	}
	printf("\n");
	return (0);
}
