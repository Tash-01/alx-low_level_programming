#include <stdio.h>
#include <unistd.h>
/**
 * main - C programme the prints exactly and followed by newline
 * Return: 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
