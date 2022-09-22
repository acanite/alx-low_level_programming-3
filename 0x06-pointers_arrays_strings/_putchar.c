#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: the char
 * Return: always success
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
