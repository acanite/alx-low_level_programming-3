#include "main.h"

/**
 * swap_int - swap the value of two integers
 * @a: an integer input
 * @b an integer input
 * Return:void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
