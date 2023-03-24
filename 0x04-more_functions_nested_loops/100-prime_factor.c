#include <stdio.h>
#include <math.h>

/**
 * main - find and print the largest prime factor of the number 612852475143, followed by a new line
 * Return: Always 0
 */
int main(void)
{
	long int n;
	long int max;

	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n / = 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;
	print("%1d\n", max);
	return (0);
}
