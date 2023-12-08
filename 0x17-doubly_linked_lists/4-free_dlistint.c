#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: header of dlistint_t
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *temp = head;

		head = head->next;

		if (head != NULL)
		{
			head->prev = NULL;
		}
		free(temp);
	}
}
