#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* print all the elements of a listint_t */
size_t print_listint(const listint_t *h);

/* Returns the number of eleements in a linked list*/
size_t listint_len(const listint_t *h);

/* adds a new node at the beginning of a linked list*/
listint_t *add_nodeint(listint_t **head, const int n);

/* adds a new node at hte end of a linked list*/
listint_t *add_nodeint_end(listint_t **head, const int n);

/* frees a linked list*/
void free_listint(listint_t *head);

/* frees a linked list*/
void free_listint2(listint_t **head);

/* delets the head node of a linked list, returns head node data*/
int pop_listint(listint_t **head);

/* returns the nth node of a linked list*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/* retunrs the sum of all the data (n) of a linked list*/
int sum_listint(listint_t *head);

/* return the sum of all the data(n) of a linked list*/
int sum_listint(listint_t *head);

/*function that inserts a new node at the given position*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/*function that delets the node at index of a linked list*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
