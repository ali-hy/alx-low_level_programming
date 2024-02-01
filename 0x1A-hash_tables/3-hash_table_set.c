#include "hash_tables.h"

/**
 * hash_table_set - set a value in a hash table at a key
 * @ht: hash table
 * @key: ...
 * @value: ...
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *dest_node = NULL;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || key == NULL)
		return (0);

	/* find where the destination node is */
	index = key_index((const unsigned char *)key, ht->size);
	dest_node = ht->array[index];
	while (dest_node)
	{
		if (strcmp(dest_node->key, key) == 0)
			break;
		dest_node = dest_node->next;
	}

	if (dest_node == NULL) /* Init node */
	{
		dest_node = malloc(sizeof(hash_node_t));
		if (dest_node == NULL)
			return (0);

		dest_node->key = malloc(strlen(key));
		if (dest_node->key == NULL)
			return (0);
		strcpy(dest_node->key, key);

		dest_node->next = ht->array[index];
		ht->array[index] = dest_node;
	}
	else
		free(dest_node->value);

	dest_node->value = malloc(strlen(value));
	if (dest_node->value == NULL)
		return (0);
	strcpy(dest_node->value, value);

	return (1);
}
