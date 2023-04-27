#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - adds a new node to the beginning of the list
 * @head: pointer to list_t list
 * @str: string
 * Return: address of new element or NULL
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	int len  = 0;

	while (str[len])
	len++;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);
	add->len = len;
	add->next = (*head);
	(*head) = add;

	return (*head);
}
