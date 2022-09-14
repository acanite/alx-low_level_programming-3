#include <stdio.h>
#include "main.h"

/**
 * @n: An integer input
 * Return: print the sign of n
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else`
	{
		_putchar('-');
		return(-1);
	}
}
