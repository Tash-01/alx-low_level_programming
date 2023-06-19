#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @needle:input
 * @haystack:input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (needle == 0)
		return (haystack);

	while (haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			else if (needle[i + 1] == '\0')
				return (haystack);
			i++;
	while (haystack[i] == needle[i])
		}

		haystack++;
	}
	return ('\0');
}
