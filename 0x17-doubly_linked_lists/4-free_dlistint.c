#include "lists.h"

/**
 * free_dlistint- frees memory allocated for a node
 * Return: success
 * @head: node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
