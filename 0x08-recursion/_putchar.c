#include <unistd.h>

/**
 * _putchar - writes tye character c to stdo
 * @c: the character to print
 * On error, -1 is returned, and errno is set appropriately
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
