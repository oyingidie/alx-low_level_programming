#include "lists.h"

/**
 * looped_listint_count - Calculates length of the loop
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the loop
 */

size_t looped_listint_count(listint_t *head)
{
	listint_t *current, *loop_start;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	current = head->next;
	loop_start = (loop_start->next)->next;

	while (loop_start)
	{
		if (current == loop_start)
		{
			current = head;
			while (current != loop_start)
			{
				nodes++;
				current = current->next;
				loop_start = loop_start->next;
			}
			current = current->next;
			while (current != loop_start)
			{
				nodes++;
				current = current->next;
			}
			return (nodes);
		}

		current = current->next;
		loop_start = (loop_start->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Deallocates all the memory used by a
 * singly linked list of integers
 * @h: Pointer to the head of the linked list
 *
 * Return: Size of list freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
		*h = NULL;
	}

	h = NULL;
	return (nodes);
}
