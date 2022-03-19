#include "lists.h"

/**
 * list_len- retusn le length of a string
 * @h: stirng
 * Return: success
 */

size_t list_len(const list_t *h)
{
	size_t ctr = 0;

	while (h != NULL)
	{
		h = h->next;
		ctr++;
	}
	return (ctr);
}
