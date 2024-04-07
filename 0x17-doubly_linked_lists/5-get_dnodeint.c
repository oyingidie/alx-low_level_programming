#include "lists.h"

/**
 * get_dnodeint_t_index - Retrieves a node at a specific index
 * in a doubly linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to be retrieved, starting from 0
 *
 * Return: The nth node of the list, or NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
