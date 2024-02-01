#include "hash_tables.h"

/**
 * hash_table_get - get value in hash table at a certain key
 * @ht: hashtable
 * @key: key to find value
 * Return: value if found, NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];

	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}

	return (NULL);
}
