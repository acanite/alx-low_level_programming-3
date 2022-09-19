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
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d",  a[i]);
		if (i + 1 != n)
			printf(", ");
	}
	printf("\n");
}
