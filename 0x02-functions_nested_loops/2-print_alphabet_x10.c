#include "main.h"

/**
 *print_alphabet_x10 - prints lowcase alpha ten times
 *
 *
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0 ; j <= 9 ; j++)
	{
		for (i = 97 ; i <= 122; i += 1)
		{
			_putchar(i);
		}
		_putchar(10);
	}
}
