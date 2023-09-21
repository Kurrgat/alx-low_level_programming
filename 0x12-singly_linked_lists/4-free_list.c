#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL) /*Traverse the list.*/
	{
		current = head; /*Store the current node.*/
		head = head->next; /*Move to the next node.*/
		free(current->str); /*Free the string in the current node.*/
		free(current); /*Free the current node.*/
	}
}
