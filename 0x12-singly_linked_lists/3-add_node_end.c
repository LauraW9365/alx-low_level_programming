#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - calculates the length of a string
 * @str: string
 * Return: length of the string
*/

unsigned int _strlen(char *str)
{
	unsigned int m;

	for (; str[m]; m++)
		;
	return (m);
}

/**
 * add_node_end - adds a new node
 * @head: pointer to the first node
 * @str: string
 * Return: address of the new element or null
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlen(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tmp = *head;
	while (tmp->next)
	
		tmp = tmp->next;
	tmp->next = new;

	return (new);
}
