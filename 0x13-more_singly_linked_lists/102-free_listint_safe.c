#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * find_loop - Detects a loop in a list.
 * @head: A pointer to the head of the list.
 *
 * Return: The node where the loop starts, or NULL if no loop is detected.
 */

listint_t *find_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	tortoise = head;
	hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}

	return (NULL);
}

/**
 * free_listint_safe - Frees a listint_t linked list safely (handles loops).
 * @h: A pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *loop_start = find_loop(*h);
	listint_t *temp, *current = *h;
	size_t count = 0;

	if (!h || !(*h))
		return (0);

	if (loop_start)
	{
		while (current != loop_start)
		{
			temp = current;
			current = current->next;
			free(temp);
			count++;
		}
		return (count);
	}

	while (*h)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}

	*h = NULL;
	return (count);
}
