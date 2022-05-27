#include "hash_tables.h"

/**
 * hash_table_set- add a hash table
 * @ht: hash table to be added
 * @key: key of hash table
 * @value: data inside hash table
 *
 * Return: success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_index = 0;

	if (ht == NULL)
		return (0);

	if (key == NULL || *key == '\0')
		return (0);

	k_index = key_index((unsigned char *)key, ht->size);

	if (add_hash(&(ht->array[k_index]), key, value) == NULL)
	{
		return (0);
	}
return (1);
}

/**
 * add_hash- adds a new node
 * @head: first node
 * @key: key of the hash table
 * @value: value of the hash table
 * Return: success
 */

hash_node_t *add_hash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (*head);
		}
		tmp = tmp->next;
	}
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (NULL);
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *head;
	*head = tmp;
	return (*head);
}

