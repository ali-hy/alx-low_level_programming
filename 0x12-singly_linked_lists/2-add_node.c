#include "lists.h"

/**
 * add_node - add a node to the beginning of the list
 * @head: pointer to head node
 * @str: string to store in node
 * Return: new head of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *res = malloc(sizeof(list_t));

	if (res == NULL)
		return (NULL);

	res->str = strdup(str);
	res->len = 0;

	while ((res->str[res->len]) != '\0')
		res->len++;

	res->next = *head;
	head = &res;

	return (res);
}
