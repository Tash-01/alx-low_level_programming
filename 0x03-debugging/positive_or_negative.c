#include "main.h"

/**
 * positive or negative  -  check for positive or negative number
 *
 * @i: the number to be checked
 * Return: Always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
