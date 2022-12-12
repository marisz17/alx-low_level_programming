#include <stdio.h>

/**
 *main - prints lowcase alpha
 *
 *Return: zero
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122; i += 1)
	{
		if (i != 101)
		{
			if (i != 113)
			{
				putchar(i);
			}
		}
	}
	putchar(10);
	return (0);
}
