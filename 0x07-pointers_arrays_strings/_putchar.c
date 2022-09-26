#include <unistd.h>
/**
 * _putchar - writes char c to stdout
 * @c: the char to be written
 * Return: 1 on sucess and -1 on fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
