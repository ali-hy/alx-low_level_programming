#include "lists.h"

/**
 * free_listint - free memory allocated by a listint
 * @head: head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
