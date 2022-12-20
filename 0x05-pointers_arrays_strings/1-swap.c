#include "main.h"

/**
 *swap_int - swap a and b.
 *@a: first int
 *@b: second int
 *
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int arr[2];

	*arr = *a;
	*(arr + 1) = *b;
	*a = arr[1];
	*b = arr[0];
}
