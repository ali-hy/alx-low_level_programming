#include "hash_tables.h"

/**
 * hash_table_print - print all key-value pairs in a hash table
 * @ht: hashtable to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, first = 1;
	hash_node_t *curr = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			if (first)
				first = 0;
			else
				printf(", ");
			printf("'%s':'%s'", curr->key, curr->value);

			curr = curr->next;
		}
	}

	printf("}\n");
}
