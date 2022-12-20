#include "main.h"
/**
 *_puts - prints string
 *@str: string input
 *
 *Return: void
 */
void _puts(char *str)
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
	for (m = 0 ; m < j ; m++)
	{
		_putchar(str[m]);
	}
	_putchar(10);
}
