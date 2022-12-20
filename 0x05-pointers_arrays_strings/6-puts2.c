#include "main.h"
/**
 *puts2 - prints string every other number
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
	for (m = 0 ; m < j ; m += 2)
	{
		_putchar(str[m]);
	}
	_putchar(10);
}
