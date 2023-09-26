#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops).
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	tortoise = head;
	hare = head;

	while (tortoise && hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare) /* Loop detected */
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			break;
		}
	}

	if (!tortoise || !hare || !hare->next)
	{
		for (count = 0; head; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	return (count);
}
