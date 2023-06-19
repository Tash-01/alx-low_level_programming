#include "main.h"

/**
 * _islower - a function that checks for lowercase characters
 * @c: single letter input
 * Return: Always 0
 */
int _islower(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
		continue;
	}
	return (0);
}
