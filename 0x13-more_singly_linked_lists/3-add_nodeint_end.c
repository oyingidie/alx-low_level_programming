#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of linked list
 * @head: Pointer to the head of singly linked list of integers
 * @n: Value to be added
 *
 * Return: Address of new element, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);
}
