#include "lists.h"

/**
 * add_node- adds a node at the fist position
 * @head:Fist node
 * @str: name
 * Return: success
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	if (head == NULL)
	{
		return (NULL);
	}
	return (newNode);
}
