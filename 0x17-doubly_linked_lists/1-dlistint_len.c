#include "lists.h"

/**
 * dlistint_len - Calculates the length of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements in linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
