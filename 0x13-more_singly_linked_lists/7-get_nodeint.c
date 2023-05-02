#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: a pointer to the first node
 * @index: index
 * Return: nth node of a linked list
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int h;

	if (head == NULL)
		return (NULL);

	for (h = 0; h < index; h++)
	{
		head = head->next;

		if (head == NULL)
			return (NULL);
	}

	return (head);
}
