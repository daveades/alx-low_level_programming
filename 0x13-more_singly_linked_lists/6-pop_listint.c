#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node
 *
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	int data = (*head)->n;
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
