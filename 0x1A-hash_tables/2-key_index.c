#include "main.h"

/**
 * key_index - get the index of a key within a certain size
 * @key: ...
 * @size: size of array in hashmap
 * Return: index in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
