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

	if (head == NULL)
		return (NULL);

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

	printf("I starts as: %d\n", i);

	prev_node = *head;
	while (prev_node != NULL)
	{
		if (i == idx)
		{
			if (prev_node->next != NULL)
				next_node = prev_node->next;
			else
				next_node = NULL;
			prev_node->next = new_node;
			new_node->next = next_node;
			return (new_node);
		}
		prev_node = prev_node->next;
		i++;
	}

	free(new_node);
	return (NULL);
}
