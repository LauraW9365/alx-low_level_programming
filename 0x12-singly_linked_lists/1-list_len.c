#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: name of the list
 * Return: the number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{

		c++;
		h = h->next;
	}

	return (c);
}

