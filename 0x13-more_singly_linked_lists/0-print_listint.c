#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: pointer to beginning(head) of list to print.
 *
 * Return: the number of nodes in the listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t  node_count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	printf("%d\n", h->n);

	return (node_count);
}
