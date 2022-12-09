#include <stdio.h>

/**
 *main - prints lowcase alpha
 *
 *Return: zero
 */
int main(void)
{
	int i;
	int j;
	int x = 10;

	for (i = 48 ; i <= 57; i += 1)
	{
		putchar(i);
	}
	for (j = 97 ; j <= 102; j += 1)
	{
		putchar(j);
	}
	putchar(x);
	return (0);
}
