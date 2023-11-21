#include "lists.h"

/**
 * pop_listint - delete head node from linked list
 * @head: head of linked list
 * Return: val of deleted element
 */
int pop_listint(listint_t **head)
{
	listint_t *next;
	int res;

	if (*head == NULL)
		return (0);

	next = (*head)->next;
	res = (*head)->n;

	free(*head);
	*head = next;

	return (res);
}
