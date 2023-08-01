#include "lists.h"

/**
 * add_nodeint - appending a new node at the beginning of a linked list
 * @head: pointer
 * @n: data 
 *
 * Return: 0 or 1
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
 listint_t *new;

 new = malloc(sizeof(listint_t));
 if (!new)
 return (NULL);

 new->n = n;
 new->next = *head;
 *head = new;

 return (new);
}

