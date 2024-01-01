#include "lists.h"

/**
 * sum_listint - Sums all the data (n) of a linked list.
 * @head: Pointer to the head node of the linked list.
 *
 * Return: The sum of all the data (n) in the linked list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
