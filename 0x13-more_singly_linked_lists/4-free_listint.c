#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listnt_t list.
 * @head: pointer to the beginning of the list
 *
 * Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
