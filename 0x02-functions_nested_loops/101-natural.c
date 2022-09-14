#include <stdioh>
/**
 * main - entry point
 * Return: nothing
 */

int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 5 == 0 || i % 3 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
