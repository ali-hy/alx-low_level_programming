#include "lists.h"

/**
 * add_dnodeint - add a node to the beginning of a doubly linked list
 * @head: ...
 * @n: ...
 * Return: head of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	new_node->next = *head;
	new_node->prev = NULL;
	(*head)->prev = new_node;

	return (new_node);
}
