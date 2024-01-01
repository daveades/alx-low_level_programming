#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely
 * @h: Double pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
	{
		return (size);
	}

	current = *h;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		size++;
		if (next >= current)
		{
			break;
		}
		current = next;
	}

	*h = NULL;
	return (size);
}
