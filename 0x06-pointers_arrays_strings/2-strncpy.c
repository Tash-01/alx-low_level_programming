#include "main.h"

/**
 * strncpy - function that copies a string
 * @dest: the deatination of the string
 * @src: the source of string
 * @n: the length of int
 * Return: pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && (src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
		return (dest);
}
