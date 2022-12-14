#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 *print_last_digit - print sign
 *@n: number
 *Return: zero
 */
int print_last_digit(int n)
{
	int y = n % 10;

	if (n < 0)
	{
		y = -1 * y;
	}
	_putchar(y + '0');
	return (y);
}
