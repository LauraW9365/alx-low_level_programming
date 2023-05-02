#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head wihc is a pointer to the first node
*/

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;

		free(head);

		head = next;
	}
}
