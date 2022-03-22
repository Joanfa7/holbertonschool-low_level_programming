#include "lists.h"

/**
 * pop_listint- delete the head node of a node
 * @head: head of the linked list
 * Return: success
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int temp2;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	temp2 = (*head)->n;

	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (temp2);
}
