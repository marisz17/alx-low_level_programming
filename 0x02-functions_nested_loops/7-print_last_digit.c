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

	if (n < 0)
	{
		y = -1 * n;
		return (y % 10);
	} else if (n >= 0)
	{
		return (n % 10);
	}
	return (0);
}
