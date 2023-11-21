#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: pointer to list's head
 * Return: head of list after reversal
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *reversed = NULL;

	if (head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = reversed;
		(*head) = next;
	}

	return (reversed);
}
