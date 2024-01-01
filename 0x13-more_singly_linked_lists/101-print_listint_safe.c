#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	const listint_t **addr_store = malloc(sizeof(listint_t *) * 1024);
	size_t i;

	if (addr_store == NULL)
		return (0);

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current == addr_store[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				free(addr_store);
				return (count);
			}
		}

		printf("[%p] %d\n", (void *)current, current->n);
		addr_store[count++] = current;
		current = current->next;
	}

	free(addr_store);
	return (count);
}