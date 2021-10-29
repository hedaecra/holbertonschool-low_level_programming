#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *sn;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0, k = 0;

for (k = 0; s1[k] != '\0'; k++)
len1++;

for (k = 0; s2[k] != '\0'; k++)
len2++;

if (n < len2)
sn = malloc(sizeof(char) * (len1 + n + 1));
else
sn = malloc(sizeof(char) * (len1 + len2 + 1));

if (!sn)
return (NULL);

while (i < len1)
{
sn[i] = s1[i];
i++;
}

while (n < len2 && i < (len1 + n))
sn[i++] = s2[j++];

while (n >= len2 && i < (len1 + len2))
sn[i++] = s2[j++];

sn[i] = '\0';

return (sn);
}
