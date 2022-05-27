#include "hash_tables.h"

/**
 *
 *
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index = 0;

	if(ht == NULL)
		return(0);

	if(key == NULL || *key == '\0')
		return(0);

	k_index = key_index((unsigned char *)key, ht->size);

	if(add_hash(&(ht->array[k_index]), key, value) == NULL)
	{
		return (0);
	}
    return (1);
}
