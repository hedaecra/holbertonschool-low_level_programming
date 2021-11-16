#include "lists.h"

/**
 * listint_len - print element linked list
 * @h: linken list type listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t elemet = 0;

while (h)
{
elemet++;
h = h->next;
}
return (elemet);
}
