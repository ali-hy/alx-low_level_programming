#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a specified index
 * @head: pointer to head of index
 * @idx: index to insert node at
 * @n: val of new node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new_node, *prev_node, *next_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	prev_node = *head;
	while (prev_node != NULL)
	{
		if (i++ == idx)
		{
			next_node = prev_node->next->next;
			prev_node->next = new_node;
			new_node->next = next_node;
			return (new_node);
		}
	}

	free(new_node);
	return (NULL);
}
