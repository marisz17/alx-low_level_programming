#include <stdio.h>

/**
 *main - prints lowcase alpha
 *
 *Return: zero
 */
int main(void)
{
	char i;
	char x = '\n';

	for (i = 'a' ; i <= 'z'; i += 1)
	{
		putchar(i);
	}
	putchar(x);
	return (0);
}
