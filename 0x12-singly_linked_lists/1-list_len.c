#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0; /*Initialize the node count to 0*/

	while (h != NULL) /*Loop through the list.*/
	{
		h = h->next; /*Move to the next node.*/
		node_count++; /*Increment the node count.*/
	}

	return (node_count); /*Return the total number of nodes.*/
}
