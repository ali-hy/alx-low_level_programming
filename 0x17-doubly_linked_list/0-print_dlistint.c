#include "list.h"

/**
 * print_dlistint - ...
 * @h: ...
 * Return: ...
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *curr = h;
	size_t count = 0;

	while (curr != NULL)
	{
		printf("%d\n", curr);
		curr = curr->next;
	}

	return (count);
}
