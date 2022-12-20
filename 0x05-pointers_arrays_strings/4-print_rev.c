#include "main.h"
/**
 *print_rev - prints string in reverse
 *@s: string input
 *
 *Return: void
 */
void print_rev(char *s)
{
	int i = 1;
	int j = 0;
	int m;
	char k = s[0];

	while (k != '\0')
	{
		j++;
		k = s[i++];
	}
	for (m = j - 1 ; m >= 0 ; m--)
	{
		_putchar(s[m]);
	}
	_putchar(10);
}
