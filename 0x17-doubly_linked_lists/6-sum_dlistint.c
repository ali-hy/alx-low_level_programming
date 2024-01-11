#include "lists.h"

/**
 * sum_dlistint - ...
 * @head: ...
 * Return: sum of elements in list
 */
int sum_dlistint(dlistint_t *head)
{
	int res = 0;

	while (head != NULL)
	{
		res += head->n;
		head = head->next;
	}

	return (res);
}
