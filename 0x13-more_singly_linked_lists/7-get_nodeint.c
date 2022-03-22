#include "lists.h"

/**
 * get_nodeint_at_index- returns the nth node of a linked list
 * @head: head of the linked list
 * @index: index of the linked list
 * Return: success
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ctr = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (ctr == index)
			return (head);
		head = head->next;
		ctr++;
	}
	return (head);
}
