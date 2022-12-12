#include <stdio.h>

/**
 *main - combination of two digits
 *
 *Return: zero
 */

int main(void)
{
  int i;
  int j;

  for (i = 48 ; i < 58 ; i++)
    {
      for (j = 48 ; j < 58 ; j++)
	{
	  if (i < j)
	    {
	      putchar(i);
	      putchar(j);
	    }
	  if (i < 56)
	    {
	      putchar(44);
	      putchar(32);
	    }
	}
    }
  putchar(10);
  return (0);
}
