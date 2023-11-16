#include "lists.h"

/**
 * add_node_end - add node to end of list
 * @head: head
 * @str: string to put in node
 * Return: head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t)), *i;

	if (node == NULL)
		return (NULL);

	node->str = strdup(str);
	node->len = 0;

	if (node->str != NULL)
		while (node->str[node->len] != '\0')
		{
			node->len++;
		}

	i = *head;
	if (i == NULL)
		*head = node;
	else
	{
		while (i->next != NULL)
			i = i->next;
		i->next = node;
	}

	return (node);
}
