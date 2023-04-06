#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if a string is a
 * palindrome and if not its 0
 * @s: the string
 * Return:1 if a string is palindrome and 0 if its not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 *_strlen_recursion - returns the length of a string
 * @s: calculate the length of string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters for palindrome
 * @s: check the string
 * @i: iterator
 * @len: length of the string
 * Return: 1 if string is palindrome and 0 it its not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
