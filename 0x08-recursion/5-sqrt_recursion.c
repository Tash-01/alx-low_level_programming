#include "main.h"
#include <stdio.h>

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square root of num
 * @n: A number to calculate the natural square root
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
	return (actual_sqrt_recursion(n, 0));
}
/**
 * _sqrt_recursion - function that returns the natural square root of num
 * @n:  A number to calculate the natural square root
 * @i: iterator
 * Return: the square root
 */
int actual_sqrt_recursion(int n, int i);
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
