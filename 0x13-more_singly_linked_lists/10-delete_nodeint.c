#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *	position in a linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to delete.
 *
 * Return: 1 if successful, -1 if the node does not exist.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
