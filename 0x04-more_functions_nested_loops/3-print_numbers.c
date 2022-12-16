#include "main.h"

/**
 *print_numbers - prints numbers 0 - 9
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 48 ; i < 58; i += 1)
	{
		_putchar(i);
	}
	_putchar(10);
}
