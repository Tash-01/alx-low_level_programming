#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: characters to print
 *
 * Return:on success 1
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
