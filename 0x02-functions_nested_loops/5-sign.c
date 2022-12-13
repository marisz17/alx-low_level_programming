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
		return (1);
	} else if (n == 0)
	{
		return (0);
	} else
	{
		return (-1);
	}
}
