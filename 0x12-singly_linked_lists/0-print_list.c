#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the start of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
unsigned int n;

for (n = 0; h; n++)
{
printf("[%u] %s\n", h->len, h->str);
h = h->next;
}
return (n);
}
