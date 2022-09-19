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
	short c = 0;
	int i;

	i = n

	while (i-- > 0)
	{
		printf("%d", a[c++]);
		if (i != 0)
			printf(", ");

	}
	printf("\n");
}
