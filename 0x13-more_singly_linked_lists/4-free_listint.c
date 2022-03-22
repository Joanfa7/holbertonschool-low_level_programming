#include "lists.h"

/**
 * free_listint- frees linked list
 * @head: list
 * Return: success
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}


