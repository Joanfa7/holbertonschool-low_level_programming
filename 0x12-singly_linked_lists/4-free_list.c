#include "lists.h"

/**
 * free_list- frees a linked list
 * @head: fist node
 * Return: success
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
