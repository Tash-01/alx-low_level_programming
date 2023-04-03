#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @src: Where memory is copied
 * @dest: where memory is stored
 * @n: Number of bytes
 *
 * Return: Copied memory with changed n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int s = 0;

	for (; s < i; s++)
	{
		dest[s] = src[s];
			n--;
	}
	return (dest);
}
