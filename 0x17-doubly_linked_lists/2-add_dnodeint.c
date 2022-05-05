#include "lists.h"

/**
 * add_dnodeint- adds a new node at the beginning of a linked list
 * Return: adress of the new element or Null if fail
 * @head: head of hte list.
 * @n: data of the node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;


	new_node = malloc(sizeof(new_node));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	if (*head)
	{
		new_node->next = *head;
		if (*head)
		{
			(*head)->prev = new_node;
		}
	}
	*head = new_node;

	return (new_node);
}
