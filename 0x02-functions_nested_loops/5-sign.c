#include <stdio.h>
#include "main.h"

/**
 *print_sign - print sign
 *@n: number
 *Return: zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(49);
	} else if (n == 0)
	{
		_putchar(48);
	} else
	{
		_putchar(45);
		_putchar(49);
	}
	return (0);
}
