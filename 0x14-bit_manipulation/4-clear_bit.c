#include "main.h"

/**
 * clear_bit - Value bit 0
 * @n: Pointr number
 * @index: Index 0 bit
 *
 * Return: Success 0 or -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
