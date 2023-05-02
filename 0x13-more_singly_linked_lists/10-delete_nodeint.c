#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @index: index of the node
 * @head: pointer to the first node and the head
 * Return: 1 if succesful or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int m;

	listint_t *next, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next = (*head)->next;
		free(*head);

		*head = next;
		return (1);

	}
	tmp = *head;

	for (m = 0; m < index - 1; m++)
	{
		if (tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
	}
	next = tmp->next;
	tmp->next = next->next;

	free(next);
	return (1);
}
