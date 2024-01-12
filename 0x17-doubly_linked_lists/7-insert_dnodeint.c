#include "lists.h"

/**
 * insert_dnodeint_at_index - ...
 * @h: ...
 * @idx: ...
 * @n: ...
 * Return: ...
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *prev = *h, *next = NULL;
	unsigned int i = 1;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (prev != NULL)
	{
		if (i == idx)
			break;
		prev = prev->next;
		i++;
	}

	if (prev == NULL)
		return (NULL);

	next = prev->next;

	prev->next = new_node;
	new_node->prev = prev;

	new_node->next = next;
	if (next)
		next->prev = new_node;

	return (new_node);
}
