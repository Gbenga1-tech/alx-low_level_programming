#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the members of a listint_t list.
 * @h: pointer to beginning(head) of list to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
