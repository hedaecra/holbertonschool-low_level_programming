#include "main.h"

/*
** main - putchar()
** Return: 0
*/

int main(void)
{
  char out[]="_putchar\n";
  int num=0;

  for(num=0; num<9; num++)
    {
      putchar(out[num]);
    }
  return (0);
}
