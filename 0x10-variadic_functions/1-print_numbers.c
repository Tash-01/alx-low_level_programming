#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator - the string to be printed between numbers
 * @n: number of intergers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list les;
	unsigned int i;

	va_start(les, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(les, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(les);
}
