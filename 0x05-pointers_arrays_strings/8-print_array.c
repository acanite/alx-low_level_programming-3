#include <stdio.h>
#include "main.h"

/**
 * print_array - check main
 * @a: the array
 * @n: number of elements in array
 * Return: Void
 */

void print_array(int *a, int *n)
{
	int j = 0;

	for (n--; n >= 0; j++, n--)
	{
		printf("%d", a[j]);
		if(n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
