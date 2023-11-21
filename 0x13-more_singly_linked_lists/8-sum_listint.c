#include "lists.h"

/**
 * sum_listint - calculate the sum of ints in a lintint
 * @head: head of list
 * Return: sum of ints in the list
 */
int sum_listint(listint_t *head)
{
	int res = 0;

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
