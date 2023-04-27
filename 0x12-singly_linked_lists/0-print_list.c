#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: list
 * Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	int j = 0;
	
	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d] %s\n", h->str, h->len);
		}
		j++;

		h = h->next;
	}
	return(j);
}
