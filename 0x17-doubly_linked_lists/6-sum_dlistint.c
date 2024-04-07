#include "lists.h"

/**
 * sum_dlistint - Adds all node values in a doubly linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all data (n) of the linked list, or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
