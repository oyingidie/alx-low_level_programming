#include "lists.h"

/**
 * free_list - Free memory used by linked list
 * @head: Pointer to head of the list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
