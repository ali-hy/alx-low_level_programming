#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at a sepcified index
 * @head: head of the list
 * @index: index of the node to delete
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *prev_node = *head, *next_node, *temp_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	while (prev_node->next != NULL)
	{
		if (i++ == index)
		{
			next_node = prev_node->next->next;
			temp_node = prev_node->next;
			prev_node->next = next_node;

			free(temp_node);
			return (1);
		}

		prev_node = prev_node->next;
	}

	return (-1);
}
