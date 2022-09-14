#include "main.h"

/**
 * _islower - check main
 * Return: 0 or 1.
 * @i: An integer input
 * Description: Function that checks lower case
 */
int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
