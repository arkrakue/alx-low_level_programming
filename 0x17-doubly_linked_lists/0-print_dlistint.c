#include "lists.h"

/**
 * print_dlistint -  Prints a doubly linked list
 * @h: Head node of doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
        size_t count = 0;
        const dlistint_t *temp;

        temp = h;
        while (temp)
        {
                printf("%d\n", temp->n);
                temp = temp->next;
                count++;
        }
        return (count);
}
