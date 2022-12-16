#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: number
 * Return: 1 for upper, 0 for other
 */
int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}
	return (0);
}
