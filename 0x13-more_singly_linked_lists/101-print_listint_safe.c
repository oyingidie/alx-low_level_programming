#include "lists.h"

/**
 * looped_listint_len - Calculates length of the loop in a singly linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the loop
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *current, *loop_start;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	current = head->next;
	loop_start = (head->next)->next;

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
 * print_listint_safe - Displays the values of nodes in the linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: Number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
