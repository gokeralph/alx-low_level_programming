#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at thr beginning of a list
 * @head: head address
 * @str: string to put through
 * Return: returns an address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int k = 0;

	while (str[k])
		k++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = k;
	new->next = *head;

	*head = new;

	return (new);
}
