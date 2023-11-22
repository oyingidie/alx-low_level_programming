#include "lists.h"

/**
 * sum_listint - Adds vlaue to each node to running total
 * @head: Pointer to the head of a singly linked list
 *
 * Return: The sum of all the data of the linked list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
