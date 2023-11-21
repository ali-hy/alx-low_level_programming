#include "lists.h"

/**
 * listint_len - get length of list
 * @h: head of list
 * Return: list length
 */
size_t listint_len(const listint_t *h)
{
	int len;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
