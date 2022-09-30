#include <stdio.h>
#include "main.h"

/**
 * _isupper - check main
 * @c: an integer input
 * Description: checks for upper case number
 * Return: Boolean
 */

int _isupper(int c)
{
	char a;
	int n = 0;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (a == c)
		{
			n = 1;
			break;
		}
	}
	return (n);
}
