#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node to the beginning of the list
 * @head: the head which is a pointer to the first node
 * @n: int to be added
 * Return: address of the new element or null
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *pt;

	if (head == NULL)
		return (NULL);

	pt = malloc(sizeof(listint_t));

	if (pt == NULL)
		return (NULL);

	pt->n = n;
	pt->next = *head;

	*head = pt;

	return (pt);

}
