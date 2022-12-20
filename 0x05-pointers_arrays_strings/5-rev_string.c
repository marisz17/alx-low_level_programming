#include "main.h"
/**
 *rev_string - prints string in reverse
 *@s: string input
 *
 *Return: void
 */
void rev_string(char *s)
{
	int i = 1;
	int j = 0;
	int m, n, o;
	char k = s[0];

	while (k != '\0')
	{
		j++;
		k = s[i++];
	}
	m = j - 1;
	n = 0;
	while (n < m)
	{
		o = s[n];
		s[n] = s[m];
		s[m] = o;
		n++;
		m--;
	}
}
