#include "main.h"

/**
 * string_toupper - capitalize letters
 * Return: c
 * @c: string to be capitalized
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0')
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;
	return (c);
}
