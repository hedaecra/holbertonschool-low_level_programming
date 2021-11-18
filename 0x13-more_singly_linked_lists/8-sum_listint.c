#include "lists.h"

/**
 * sum_listint - Sum of all data ()
 * @head: first node i the linked list
 *
 * Return: result zum
 */
int sum_listint(listint_t *head)
{
int zum = 0;
listint_t *tmp = head;

while (tmp)
{
zum += tmp->n;
tmp = tmp->next;
}

return (zum);
}
