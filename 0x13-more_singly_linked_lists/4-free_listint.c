#include "lists.h"

/**
 * free_listint - Deallocates memory of singly linked list
 * @head: Pointer to head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
