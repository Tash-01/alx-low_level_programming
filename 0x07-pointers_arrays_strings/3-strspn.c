#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: string ....
 * @accept:measure the prefix
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
		int i;

	while (*s)
	{
		for (i = n; accept[i]; i++)
		{
			if (*s == accept[i])
			{

				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
