#include "lists.h"

/**
 * get_dnodeint_at_index- return the nth node of a linked list
 * Return: the nth node
 * @head: node
 * @index: index of node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (counter == index)
		{
			return (head);
		}
		head = head->next;
		counter++;
	}
	return (head);
}
