#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int compare;
int i = 0;

compare = n ^ m;

while (compare >= 1)
{
if ((compare & 1) == 1)
{
i++;
}

compare >>= 1;
}
return (i);
}
