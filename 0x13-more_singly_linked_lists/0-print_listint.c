#include "lists.h"

/**
 * print_listint - Displays all the elements of linked list
 * @h: Pointer to head of linked list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
