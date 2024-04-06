#include "lists.h"

/**
 * add_dnodeint - Adds a new node to the beginning of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: Value of the node
 *
 * Return: Address of the new element, or NULL (fail)
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_node->next = h;

	if (h != NULL)
		h->prev = new_node;

	h = new_node;

	return (new_node);
}
