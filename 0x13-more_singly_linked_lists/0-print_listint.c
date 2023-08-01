#include "lists.h"

/**
 * print_listint - this is a program that prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes in a list
 */
size_t print_listint(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num++;
 h = h->next;
 }

 return (num);
}
