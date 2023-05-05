#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big, and 1 if little
 */
int get_endianness(void)
{
	unsigned int l = 1;
	char *c = (char *) &l;

	return (*c);
}
