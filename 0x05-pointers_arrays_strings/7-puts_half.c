#include <stdio.h>
#include "main.h"
/**
 *puts_half - prints half string
 *@str: string input
 *
 *Return: void
 */
void puts2(char *str)
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
		m = 0;
	} else
	{
		m = (j - 1) / 2;
	}
	while (str[m] != '\0')
	{
		m++;
		_putchar(str[m]);
	}
}
