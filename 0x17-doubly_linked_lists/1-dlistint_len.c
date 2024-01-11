#include "lists.h"

/**
 * dlistint_len - get length of doubly linked list
 * @h: head of doubly linked list
 * Return: length of doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t l = 0;

	while (h != NULL)
	{
		h = h->next;
		l++;
	}

	return (l);
}
