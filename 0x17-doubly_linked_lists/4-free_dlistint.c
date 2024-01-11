#include "lists.h"

/**
 * free_dlistint - ...
 * @head: ...
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head, *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
