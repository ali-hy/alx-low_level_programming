#include "hash_tables.h"

/**
 * hash_node_delete - delete a list of hash_node s
 * @head: start of list
 */
void hash_node_delete(hash_node_t *head)
{
	hash_node_t *next = NULL;
	int count = 0;

	while (head)
	{
		next = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = next;
		count++;
	}
}

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			hash_node_delete(ht->array[i]);
		}
	}

	free(ht->array);
	free(ht);
}
