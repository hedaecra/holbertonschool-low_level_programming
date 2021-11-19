#include "main.h"

/**
 * print_binary - binary represetation of a number
 * @n: Number print
 */
void print_binary(unsigned long int n)
{
int i, sw = 0;
unsigned long int bina;

for (i = 63; i >= 0; i--)
{
bina = n >> i;
if (bina & 1)
{
_putchar('1');
sw++;
}
else if (sw)
_putchar('0');
}
if (!sw)
_putchar('0');

}
