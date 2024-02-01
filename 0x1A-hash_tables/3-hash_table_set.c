#include "main.h"

/**
 * hash_table_set - set a value in a hash table at a key
 * @ht: hash table
 * @key: ...
 * @value: ...
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->value = value;
	index = key_index(key, ht->size);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
}
