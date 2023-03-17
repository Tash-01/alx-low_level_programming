#include <stdio.h>
/**
 * main -print the alpabetic in lower case
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar (c);
	}
	putchar ('\n');
	return (0);
}
