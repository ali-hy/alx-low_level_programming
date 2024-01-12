#include "lists.h"

/**
 * delete_dnodeint_at_index - lol hehe wtf
 * @head: ...
 * @index: ...
 * Return: 2na bgad mesh na2es tawator wana fel 7ala di
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *next, *node = *head;
	unsigned int i = 0;

	while (node != NULL)
	{
		if (i == index)
			break;
		node = node->next;
		i++;
	}

	if (node == NULL)
		return (-1);

	prev = node->prev;
	next = node->next;

	free(node);
	if (!prev && !next)
	{
		*head = NULL;
		return (1);
	}

	if (prev)
		prev->next = next;
	else
	{
		next->prev = NULL;
		*head = next;
	}

	if (next)
		next->prev = prev;
	else
	{
		prev->next = NULL;
		*head = prev;
	}

	return (1);
}
