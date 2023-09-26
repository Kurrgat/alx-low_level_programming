#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: A pointer to a pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL, *current = *head;

	while (current != NULL)
	{
		next = current->next; /* Store the next node */
		current->next = prev; /* Reverse the next pointer of the current node */
		prev = current;       /* Move prev to the current node */
		current = next;       /* Move current to the next node */
	}

	*head = prev; /* Update the head pointer to the new head */

	return (*head);
}
