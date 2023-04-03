#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: Starting address of memory to be filled
 * @b: the desired value
 * @n: Number of byte that should be changed
 * Return: The changed array with the new value  for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
		s[i] = b;

	n--;
	return (n);
}
