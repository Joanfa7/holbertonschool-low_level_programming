#include "lists.h"

/**
 * listint_len- return the length of the linked list
 * @h: pointer to header
 * Return: success
 */

size_t listint_len(const listint_t *h)
{
	size_t ctr = 0;

	while(h != NULL)
	{
		h = h->next;
		ctr++
	}
	return(ctr);
}
