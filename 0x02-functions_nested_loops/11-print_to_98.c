#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - print range to 98
 *@n: number
 *Return: null
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			_putchar(i + '0');
		}
	}
	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			_putchar(i + '0');
		}
	}
}
