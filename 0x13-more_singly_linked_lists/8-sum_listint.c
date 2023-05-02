#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - prints the sum of all the data (n) of a linked list
 * @head: pointer to the first node
 * Return: 0 or the sum of all the data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;

		head = head->next;
	}

	return (sum);
}
