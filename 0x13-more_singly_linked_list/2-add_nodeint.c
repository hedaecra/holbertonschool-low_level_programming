#include "lists.h"

/**
 * add_nodeint - add new node
 * @head: pointer first the list
 * @n: data insert new node
 *
 * Return: Address of the new element
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
