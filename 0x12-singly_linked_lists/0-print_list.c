#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	char *s;
	int res = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			s = "(nil)";
		else
			s = h->str;
		printf("[%d] %s\n", h->str);
		res++;
	}

	return (res);
}
