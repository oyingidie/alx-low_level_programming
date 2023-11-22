#include "lists.h"

/**
 * free_listint_safe - Deallocates all the memory used by a
 * singly linked list of integers
 * @h: Pointer to the head of the linked list
 *
 * Return: Size of list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		temp = *h;
		*h = temp->next;
		free(temp);
		len++;
	}

	return (len);
}
