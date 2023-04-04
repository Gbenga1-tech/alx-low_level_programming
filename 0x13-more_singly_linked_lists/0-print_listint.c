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
	int nodes = 0;

	while (h != NULL)
	{
		printf("[%d] %s\n", 0, "(nil)";
		h = h->next;
		nodes++;
	}
	else
	{
	       printf("[%d] %s\n", h->len, h->str);
	       nodes++;
	       h = h->next;
	}
}
	return (nodes);
}
