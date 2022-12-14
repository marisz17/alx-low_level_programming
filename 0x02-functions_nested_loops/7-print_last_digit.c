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
	int y;
	int x;

	if (n < 0)
	{
		y = -1 * n;
		x = y % 10;
	} else if (n >= 0)
	{
		x = n % 10;
	}
	_putchar(x + '0');
	return (x);
}
