#include "main.h"

/**
 *print_alphabet - prints lowcase alpha
 *
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97 ; i <= 122; i += 1)
	{
		_putchar(i);
	}
	_putchar(10);
}
