#ifndef LIST_H
#define LIST_H
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct node - Singly linked list
 * @str: String - (malloc'ed string)
 * @len: Length of the string
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure
 */

struct node
{
	int n;
	struct node *next;
	struct node *prev;
};
typedef struct node dlistint_t;
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
