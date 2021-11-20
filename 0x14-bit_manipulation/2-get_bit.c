#include "main.h"

/**
 * get_bit - Value of a bit index
 * @n: number to search
 * @index: index of the bit
 *
 * return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int val_idx;

if (index > 63)
return (-1);

val_idx = (n >> index) & 1;
return (val_idx);
}
