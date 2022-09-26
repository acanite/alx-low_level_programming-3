#include "main.h"
/**
 * _memset - fills first n bytes of memory area pointed to by s
 * @s: target
 * @b: constant byte
 * @n: number of bytes
 * Return: value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
