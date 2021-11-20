#include "main.h"

/**
 * set_bit - Value bit to 1
 * @n: pointer number
 * @index: index of the bit to set to 1
 *
 * Return: success 1 or -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
return (1);
}
