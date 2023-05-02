#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @idx: index of the list where the new node should be added
 * @head: pointer to the first node and the head of the list
 * @n: new node
 * Return: address of the new node or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int j;
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;

		for (j = 0; j < idx - 1 && temp != NULL; j++)
		{
			temp = temp->next;
		}

		if (temp == NULL)
			return (NULL);

	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{

		new->next = *head;

		*head = new;

		return (new);
	}

	new->next = temp->next;
	temp->next = new;

	return (new);

}
