#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the program
 * @arc: number of argments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", *argv[0]);
	return (0);
}
