#include "lists.h"

/**
 * pop_listint - Delete linken list
 * @head: Pointer to first element in the linked list
 *
 * Return: Data inside element delete
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int nu;

if (!head || !*head)
return (0);

nu = (*head)->n;
tmp = (*head)->next;
free(*head);
*head = tmp;
return (nu);
}
