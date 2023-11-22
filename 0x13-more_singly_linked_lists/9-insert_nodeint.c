#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a specified position
 * @head: Pointer to the head of the linked list
 * @idx: Index of the list where the new node is inserted
 * @n: Value to be inserted
 *
 * Return: Address of the new node, or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}

		else
			temp = temp->next;
	}

	return (NULL);
}
