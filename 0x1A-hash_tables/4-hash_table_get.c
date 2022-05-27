#include "hash_tables.h"

/**
 * hash_table_get- tetrives a value of a associated wit a key
 * @ht: hash table to be retribe
 * @key: key of a hash table
 *
 * Return: success
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = key_index((unsigned char *)key, ht -> size);
	hash_node_t *hash = ht -> array[idx];

	if (hash != NULL)
	{
		if (strcmp(key, hash->key) == 0)
			return (hash->value);
	}

	return(NULL);
}

