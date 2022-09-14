#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
 *
 * Return: nothing.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int res = i * j;
			if (res <= 9)
			{
				_putchar(res + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
