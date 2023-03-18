#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char love;

	for (love = 'z'; love >= 'a'; love--)
		putchar(love);

	putchar('\n');
		return (0);
}
