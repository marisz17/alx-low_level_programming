#include <stdio.h>
#include "main.h"
/**
 *puts_half - prints half string
 *@str: string input
 *
 *Return: void
 */
void puts_half(char *str)
{
	int i = 1;
	int j = 0;
	int m;
	char k = str[0];

	while (k != '\0')
	{
		j++;
		k = str[i++];
	}
	if (j % 2 == 0)
	{
		for (m = j / 2 ; m < j ; m++)
		{
			_putchar(str[m]);
		}
	} else
	{
		for (m = (j + 1) / 2 ; m < j ; m++)
		{
			_putchar(str[m]);
		}
	}
	_putchar(10);
}
