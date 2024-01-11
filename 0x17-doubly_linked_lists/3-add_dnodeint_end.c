#include "lists.h"

/**
 * add_dnodeint_end - ...
 * @head: ...
 * @n: ...
 * Return: ...
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tail = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tail->next != NULL)
		tail = tail->next;

	tail->next = new_node;
	new_node->prev = tail;

	return (new_node);
}
