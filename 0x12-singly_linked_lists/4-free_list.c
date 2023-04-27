#include "lists.h"
#include <stdio.h>
#include <stdio.h>

/**
 * free_list - frees the memory
 * @head: a pointer to the first node
*/

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);

		free(head);
	}
}
