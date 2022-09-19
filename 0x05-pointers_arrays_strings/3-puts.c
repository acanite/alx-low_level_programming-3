#include <stdio.h>

/**
 * _puts - Print a string followed by a new line
 * @str: string to be printed
 * Return: Void
 */

void _puts(char *str)
{
	int len;

	for (i = 0; str[i] != '\0')
	{
		++i;
	}

	write(1, str, i);
}
