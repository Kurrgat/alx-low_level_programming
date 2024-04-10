#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located, or -1 if not found or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t curr;
	size_t i;

	if (array == NULL)
		return (-1);

	while (array[prev] < value)
	{
		curr = prev + step;
		if (curr >= size)
			break;

		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);

		if (array[curr] >= value || curr + step >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
			break;
		}

		prev = curr;
	}

	for (i = prev; i <= curr && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}

	return (-1);
}
