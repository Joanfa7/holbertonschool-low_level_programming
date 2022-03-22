#include "lists.h"

/**
 * print_listint- prints the int of a list
 * @h: pointer to head
 * Return: success
 */

size_t print_listint(const listint_t *h)
{
	size_t tmp = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			tmp++;
		}
	}
	return (tmp);
}
