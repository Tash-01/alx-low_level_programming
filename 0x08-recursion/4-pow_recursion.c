#include "main.h"

/**
 * _pow_recursion - A function that returns the value of x raised power y
 * @y: input
 * @x: value to raise
 * Return: Result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
