#include <stdio.h>
#include "main.h"

/**
 *print_last_digit - print sign
 *@n: number
 *Return: zero
 */
int print_last_digit(int n)
{
	int y;
	int x;

	if (n < 0)
	{
		y = -1 * n;
		x = y % 10;
		_putchar(x + '0');
		return (x);
	} else if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	return (0);
}
