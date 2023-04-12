#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars, and initialize
 * @c: char to initialize
 * @size: number of bytes to allocate
 *
 * Return: pointer to the array,NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	s = (char *) malloc(sizeof(char) * size);
	if (s == NULL)

		while (i < size)
			return (0);
	{
		*(s + i) = c;
		i++;
	}
	*(s + i) = '\0';
	return (s);
}
