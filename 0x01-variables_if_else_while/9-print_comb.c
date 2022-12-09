#include <stdio.h>

/**
 *main - prints lowcase alpha
 *
 *Return: zero
 */
int main(void)
{
	int i;

	for (i = 48 ; i < 58; i += 1)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		} else
		{
			break;
		}
	}
	putchar(10);
	return (0);
}
