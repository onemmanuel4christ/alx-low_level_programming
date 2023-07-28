#include "lists.h"

/**
 * free_list - this function will  free a list
 * @head: returns the  head of the linked list.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *curr;

	while ((curr = head) != NULL)
	{
		head = head->next;
		free(curr->str);
		free(curr);
	}
}
i
