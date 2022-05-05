#include "lists.h"

/**
 * sum_dlistint- sum all the values of the linked list
 * @head: node
 * Return: the summ of all values.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *num = head;
	int sum = 0;

	while (num != NULL)
	{
		sum += num->n;
		num = num->next;
	}
	return (sum);
}
