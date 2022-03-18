#include "lists.h"

/**
 * add_node_end- adds a node at the fist position
 * @head:Fist node
 * @str: name
 * Return: success
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *lastNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
	*head = newNode;
	return (*head);
	}

	else
	{
		lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
		return (lastNode);
	}
	return (NULL);
}
