#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: 0
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int l;
	float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(x));
printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(y));
printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(z));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(l));
printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
return (0);
}
