#include "lists.h"

/**
 * add_node - Adds new node at the beginning of list
 * @head: Pointer to the head of linked list
 * @str: Pointer to string
 *
 * Return: Address of new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
