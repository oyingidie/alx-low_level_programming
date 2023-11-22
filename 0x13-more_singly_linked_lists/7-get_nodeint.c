#include "lists.h"

/**
 * get_nodeint_at_index - Traverses the list to find node at
 * the specified index
 * @head: Pointer to head of linked list
 * @index: Index of node to be retrieved
 *
 * Return: The nth node of linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
