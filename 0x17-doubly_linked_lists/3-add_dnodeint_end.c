#include "lists.h"

/**
 * add_dnodeint_end- add a new node at the end of a linked list
 * Return: the address of the new element of NULL if it failed
 * @head: head of the list
 * @n: data of the node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	temp = (*head);
	if (*head == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	new_node->prev = temp;

	return (new_node);
}
