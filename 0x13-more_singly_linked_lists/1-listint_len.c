#include "lists.h"

/**
 * listint_len - returns the number of elements in a list
 * @h: head of the list which is a pointer
 * Return: the number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);

}
