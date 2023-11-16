#include "lists.h"

/**
 * free_list - free a linked list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		if (head->str != NULL)
		{
			free(head->str);
		}
		next = head->next;
		free(head);
		head = next;
	}
}
