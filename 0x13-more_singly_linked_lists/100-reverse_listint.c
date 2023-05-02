#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head of the node
 * Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *pre;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	pre = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = next;
	}

	*head = pre;
	return (*head);

}
