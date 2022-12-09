#include <stdio.h>

/**
 *main - prints lowcase alpha
 *
 *Return: zero
 */
int main(void)
{
	char i;
	char j;
	char x = '\n';

	for (i = 'a' ; i <= 'z'; i += 1)
	{
		putchar(i);
	}
		for (j = 'A' ; j <= 'Z'; j += 1)
	{
		putchar(j);
	}
		putchar(x);
		return (0);
}
