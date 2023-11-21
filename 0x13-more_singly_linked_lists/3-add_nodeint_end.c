#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 * @head: 2nd order pointer to the list's head
 * @n: value of new element
 * Return: pointer to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tail;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tail = *head;
	while (tail->next != NULL)
		tail = tail->next;

	tail->next = new_node;

	return (new_node);
}
