#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0; /* Initialize the node count to 0.*/

	while (h != NULL) /*Loop through the list*/
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");/*If str is NULL, print "[0] (nil)"*/
		else
			printf("[%u] %s\n", h->len, h->str); /*Print the length and string.*/

		h = h->next; /*Move to the next node.*/
		node_count++; /* Increment the node count.*/
	}

	return (node_count); /*Return the total number of nodes.*/
}
