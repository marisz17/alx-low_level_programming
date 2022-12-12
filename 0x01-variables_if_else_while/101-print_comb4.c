#include <stdio.h>

/**
 *main - three digit combination
 *
 *Return: zero
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			for (k = 48 ; k < 58 ; k++)
			{
				if (i < j)
				{
					if ( j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i < 55)
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
