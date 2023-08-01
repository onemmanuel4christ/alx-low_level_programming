#include "lists.h"

/**
 * sum_listint - calculate
 * @head: first node in th
 * *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
 int sum = 0;
 listint_t *temp = head;

 while (temp)
 {
 sum += temp->n;
 temp = temp->next;
 }

 return (sum);
}

