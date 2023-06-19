#include "main.h"

/**
 * _strchr - A function that locates in a string
 * @s: input
 * @c: input
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int t = 0;

	for (; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
			return (&s[t]);
	}
	return (0);
}
