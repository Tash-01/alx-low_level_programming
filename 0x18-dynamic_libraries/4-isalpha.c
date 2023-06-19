#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: gets characters from 3-main.
 * Return: Always 0
 */
int _isalpha(int c)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			return (1);
		}
	}
	return (0);
}
