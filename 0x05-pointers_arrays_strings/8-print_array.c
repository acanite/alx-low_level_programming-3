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

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");

	}
	printf("\n");
}
