#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prony alphabets in upper case and lower case
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		patcher(low);
	for (low = 'A'; low <= 'Z'; low++)
		patcher(low);
	putchar('\n');
	return (0);
}
