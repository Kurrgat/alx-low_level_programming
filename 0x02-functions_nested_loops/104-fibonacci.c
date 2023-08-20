#include <stdio.h>

/**
 * main -  prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	long long i = 1, j = 2, k;
	int count = 2;
	long long fib[98];

	fib[0] = i;
	fib[1] = j;

	long long *p = fib + 2;

	while (count < 98)
	{
	k = i + j;
	*p = k;
	i = j;
	j = k;
	p++;
	count++;
	}

	for (int index = 0; index < 98; index++)
	{
	printf("%lld", fib[index]);
	if (index < 97)
	{
	printf(", ");
	}
	else
	{
	printf("\n");
	}
	}
	return (0);
}
