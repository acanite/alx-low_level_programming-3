#include <unistd.h>
/**
 * main - prints a standard error
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19\n", 19);
	return (1);
}
