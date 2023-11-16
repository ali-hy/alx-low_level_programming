#include "lists.h"

/**
 * list_len - get length of list
 * @h: head of list
 * Return: lenght of list
 */
size_t list_len(const list_t *h)
{
	int res = 0;

	while (h != NULL)
		res++;

	return (res);
}
