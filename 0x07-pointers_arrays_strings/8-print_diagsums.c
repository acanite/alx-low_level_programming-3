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
	int sum2, sum1;
	int i;

	sum2 = 0;
	sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
