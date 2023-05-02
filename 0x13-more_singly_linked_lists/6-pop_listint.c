#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of a linked list
 * @head: the head and a pointer to the first node
 * Return: 0 if the linked list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *s;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	s = *head;
	*head = s->next;
	n = s->n;

	free(s);

	return (n);
}
