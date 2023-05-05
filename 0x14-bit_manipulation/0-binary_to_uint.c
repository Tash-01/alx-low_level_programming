#include "main.h"

/**
 * binary_to_uin - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int num = 0;

	if (b == '\0')
		return (0);

	for (len = 0; b[len])
		len++;
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
		num = 2 * num + (b[len] - '0');
	}

	return (num);
}
