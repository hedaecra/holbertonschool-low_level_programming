#include "main.h"

/**
 * binary_to_uint - converts a biary number
 * @b: Pointing to a string 0 and 1
 *
 * Return: Number
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int num = 0;

if (!b)
return (0);

while (b[i])
{
if (b[i] < '0' || b[i] > '1')
return (0);

num = 2 * num + (b[i] - '0');
i++;
}
return (num);
}
