#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @n: int to add
 * @head: head that is a pointer to the first node
 * Return: adress of the new element or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
			return (new);
	}

	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = new;

	return (new);
}
