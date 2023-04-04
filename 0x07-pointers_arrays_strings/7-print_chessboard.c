#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: input
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int t;
	int s;

	for (t = 0; t < 8; t++)
	{
		for (s = 0; s < 8; s++)
			_putchar(a[t][s]);

		_putchar ('\n');
	}
}

