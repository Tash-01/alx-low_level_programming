#include "main.h"

/**
 * _rev_recursion - A funtion that prints a string in reverse
 * @s: reverse the string
 * Return: Always 0
 */
void _print_rev_recursion(char *s);
{
	if (*s == 0)
	{
		return;
	}
	s++;
	_print_rev_recursion(s + 1);
	s--;
	_putchar(*s);
}
