#include "lists.h"

/**
 * get_nodeint_at_index - get a node at an index
 * @head: head of list
 * @index: index to get node from
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *curr = head;

	while (curr != NULL)
	{
		if (i++ == index)
			return (curr);

		curr = curr->next;
	}

	return (NULL);
}
