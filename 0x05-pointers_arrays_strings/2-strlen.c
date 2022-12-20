#include "main.h"
/**
 *_strlen - length of string
 *@s: string input
 *
 *Return: length
 */
int _strlen(char *s)
{
	int i = 1;
	int j = 0;
	char k = s[0];

	while (k != '\0')
	{
		j++;
		k = s[i++];
	}
	return (j);
}
