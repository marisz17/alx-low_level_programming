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

	for (i = 'z' ; i >= 'a'; i -= 1)
	{
		putchar(i);
	}
	putchar(x);
	return (0);
}
