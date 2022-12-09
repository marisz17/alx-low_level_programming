#include <stdio.h>

/**
 *main - prints lowcase alpha
 *
 *Return: zero
 */
int main(void)
{
	char i;
	for (i = 'a' ; i <= 'z'; i+=1)
	{
		putchar(i);
	}
	putchar(\n);
	return (0);
}
