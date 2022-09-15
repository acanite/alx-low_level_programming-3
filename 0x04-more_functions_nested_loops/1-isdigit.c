#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check main 
 * @c: an integer input
 * Description: checks for a digit
 * Return: Boolean
 */

int _isdigit(int c)
{
	char i;
	int n = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			n = 1;
			break;
		}
	}
	return (n);
}
