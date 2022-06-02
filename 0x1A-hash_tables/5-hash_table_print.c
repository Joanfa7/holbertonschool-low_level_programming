#include "hash_tables.h"

/**
 * hash_table_print- prints the hash table
 * @ht: the hash table to print
 * Return: success
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *new;
	char check = 0;

	if (!ht || !ht->array)
		return;

	printf("{");
	while(idx < ht->size)
	{
		new = ht->array[idx];
		while (new != NULL)
		{
			if (check == 1)
				printf(", ");
			printf("'%s': '%s'", new->key, new->value);
			check = 1;
			new = new->next;
		}
	idx++;
	}
	printf("}\n");
}
