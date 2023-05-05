#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to tue number to change
 * @index: index to set bit
 *
 * Return: 1 for success and -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int index) * 8)
		return (-1);

	*n |= (1 << index);
	return (1);
}
