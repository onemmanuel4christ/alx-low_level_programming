#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
 * add_node_end - this will add  a new node at the end of a linked list
 * @head: will accept head of the list
 * @str: string data that will be in the new node
 *
 * Return: return address or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}

	return (*head);
}

