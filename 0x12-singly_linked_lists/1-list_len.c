#include "lists.h"

/**
 * list_len - Iterates through linked list and increments a
 * counter for each node encountered
 * @h: Pointer to the head of the linked list
 *
 * Return: Number of elements in singly linked list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;
	
	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
