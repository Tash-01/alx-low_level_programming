#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int len = n ^ m;
	unsigned long int num = 0;

	while (len != 0)
	{
		num += len & 1;
		len >>= 1;
	}
	return (num);
}
