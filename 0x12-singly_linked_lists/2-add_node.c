#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node to the start of the list
 * @head: Double pointer to the first node of the list
 * @str: String to be store in list
 *Return: address of the new node or NULL when fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
