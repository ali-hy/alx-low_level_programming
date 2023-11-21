#include "lists.h"

/**
 * free_listint2 - free memory allocated by a listint
 * @head: head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *h = *head, *next;

	if (head == NULL)
		return;

	while (h != NULL)
	{
		next = h->next;
		free(h);
		h = next;
	}

	*head = NULL;
}
