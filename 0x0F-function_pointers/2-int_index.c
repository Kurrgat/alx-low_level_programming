#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: Array containing the elements
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: return pointer to the first corresponding element.
 * returns -1 if no elements match or when size is less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int index = 0;

if (array == NULL || cmp == NULL)
return (-1);

for (; index < size; index++)
{
if (cmp(array[index]) != 0)
return (index);
}

return (-1);

}
