#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lists.h"

/**
 * list_len - this function returns all elements in a list
 * @h: accepts the head of the list
 * Return: total number of nodes in list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}

