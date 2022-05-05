#include "lists.h"

/**
 * print_dlistint- print all the elements of a linked lits
 * Return: the numbew of nodes
 * @h: pointer
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
