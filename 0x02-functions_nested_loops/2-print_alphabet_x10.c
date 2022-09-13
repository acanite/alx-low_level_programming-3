#include "main.h"

/**
 * print_alphabet_x10 - No entry point
 *
 * Return: On success Nothing.
 */

void print_alphabet_10x(void)
{
	char alphabet;
	int i;

	while (i < 10)
	{
		alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++
	}
}
