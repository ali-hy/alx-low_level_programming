#include "lists.h"

/**
 * print_listint - print a list of integers
 * @h: head of list
 * Return: number of elements in list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
	}

	return (count);
}
