#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list of integers
 * @head: Pointer to the head of linked list
 *
 * Return: Pointer to the first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
