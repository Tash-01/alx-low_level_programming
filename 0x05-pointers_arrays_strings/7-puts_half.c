#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string to print
 * Return: void
 */
void puts_half(char *str)
{
	char *ptr = str;
	int count = 0;
	int j;

	while (*ptr != '\0')
	{
		count++;
		ptr++;
	}

	for (j = 0; j <= (count - 1); j++)
	{
		if (j >= ((count) / 2) && j <= count && count % 2 == 0)
		{
			_putchar(str[j]);
		}
		else if (count % 2 != 0 && j > ((count - 1) / 2) && j <= count)
			_putchar(str[j]);
	}
	_putchar('\n');
}
