#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)
{
int len;
if (*s == 0)
return (1);
len = _constr_recursion(s);
return (check_ppal(s, 0, len));
}

/**
 * _constr_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */

int _constr_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _constr_recursion(s + 1));
}

/**
 * check_ppal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_ppal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_ppal(s, i + 1, len - 1));
}
