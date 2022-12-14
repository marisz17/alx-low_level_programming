#include <stdio.h>
#include "main.h"

/**
 *_abs - print absolute
 *@n: number
 *Return: zero
 */
int _abs(int n)
{
	int y = -1;

	if (n >= 0)
	{
		return n;
	} else if (n < 0)
	{
		return (y*n);
	}
	return (0);
}
