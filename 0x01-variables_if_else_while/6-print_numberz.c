#include <stdio.h>

/**
 *main - prints lowcase alpha
 *
 *Return: zero
 */
int main(void)
{
	int i;
	int x = 10;

	for (i = 0 ; i < 10; i += 1)
	{
		putchar(i + '0');
	}
	putchar(x);
	return (0);
}
