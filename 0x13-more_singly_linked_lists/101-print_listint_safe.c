#include "lists.h"

/**
 * push - makes a new array and adds a new item at its end
 * @list: previous array
 * @size: new size of array
 * @item: element to push to array
 * Return: the new array
 */
const listint_t **push(const listint_t **list, unsigned int size,
					   const listint_t *item)
{
	unsigned int i = 0;
	const listint_t **res;

	res = malloc(size * sizeof(listint_t *));
	if (res == NULL)
	{
		free(list);
		exit(98);
	}

	for (; i < size - 1; i++)
		res[i] = list[i];

	res[i] = item;
	if (list != NULL)
		free(list);
	return (res);
}

/**
 * print_listint_safe - print a list of integers
 * @h: head of list
 * Return: number of elements in list
 */
size_t print_listint_safe(const listint_t *h)
{
	const listint_t *curr = h, **prev = NULL;
	int i, count = 0;

	if (curr == NULL)
		exit(98);

	while (curr != NULL)
	{
		if (count > 0)
			for (i = 0; i < count; i++)
				if (prev[i] == curr)
				{
					printf("-> [%p] %d\n", (void *)curr, curr->n);
					return (count);
				}

		printf("[%p] %d\n", (void *)curr, curr->n);
		count++;
		prev = push(prev, count, curr);
		curr = curr->next;
	}

	if (prev != NULL)
		free(prev);
	return (count);
}
