#include "main.h"

/**
 * puts2 - put on char out of 2
 * @str: char
 */

void puts2(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
