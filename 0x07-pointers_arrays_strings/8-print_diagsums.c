#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * of integers
 * @a: bad idea.
 * @size: the size of the the array.
 *Return: Void
 */

void print_diagsums(int *a, int size)
{
	unsigned int c, d;
	int i;

	d = 0;
	c = 0;

	for (i = 0; i < size; i++)
	{
		c += a[(size *  i) + i];
		d += a[(size * (i + 1)) - (i + 1)];
	}


	printf("%d, %d\n", c, d);
}
