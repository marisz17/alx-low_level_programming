#include <stdio.h>

/**
 *main - prints lowcase alpha
 *
 *Return: zero
 */
int main(void)
{
	int i;
	int x = '_';

	for (i = 0 ; i < 10; i += 1)
	{
		putchar(i + '0');
	}
	putchar(x + '0');
	return (0);
}
