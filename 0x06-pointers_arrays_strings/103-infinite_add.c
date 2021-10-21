#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, leni, lenj, nu1, nu2, re, va, pr;
i = 0;
j = 0;


while (n1[i] != '\0')
{
i++;
}

while (n2[j] != '\0')
{
j++;
}

if ((i >= size_r) || (j >= size_r))
{
return (0);
}
else
{
for (; size_r > i; size_r--)
{
r[size_r - 1] = '\0';
}
pr = size_r;
}

va = 0;

if (i == j)
{
for (leni = i - 1; leni >= 0; leni--)
{
nu1 = n1[leni] - '0';
nu2 = n2[leni] - '0';
re = va + nu1 + nu2;

if (re / 10)
{
va = (re / 10);
re = (re % 10);
}
else
{
va = 0;
}

switch (re)
{
case 1:
r[pr] = '1';
break;
case 2:
r[pr] = '2';
break;
case 3:
r[pr] = '3';
break;
case 4:
r[pr] = '4';
break;
case 5:
r[pr] = '5';
break;
case 6:
r[pr] = '6';
break;
case 7:
r[pr] = '7';
break;
case 8:
r[pr] = '8';
break;
case 9:
r[pr] = '9';
break;
case 0:
r[pr] = '0';
break;
}
pr--;

}
if (leni < 0 && va > 0)
{
r[pr] = '1';
}
}
}


return (r);
}
