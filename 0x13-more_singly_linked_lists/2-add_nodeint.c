#include "lists.h"

/**
 * add_nodeint- adds a new node at the beguinnign or a linked list
 * @head: pointer to head
 * @n: int in new node
 * Return: success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	if (head == NULL)
	{
		return (NULL);
	}
	return (newNode);
}
