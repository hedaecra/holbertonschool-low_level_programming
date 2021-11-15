#include <stdio>
#include "lists.h"

/**
 * print_listint - print all element linked list
 * @h: linken list type listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
site_t elemet = 0;

while (h)
{
printf("%d\n", h->n);
elemet++;
h = h->next;
}
return (elemet);
}
