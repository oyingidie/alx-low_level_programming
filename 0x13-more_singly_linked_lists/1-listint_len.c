#include "lists.h"

/**
 * listint_len - Gets the length of linked list
 * @h: Pointer to the head of singly linked list
 *
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
