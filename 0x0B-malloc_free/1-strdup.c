#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to thr copied string (success), NULL error
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, l;

	i = 0;
	l = 0;

	if (str == NULL)
		return (NULL);

	while (str[l])
		l++;
	duplicate = malloc(sizeof(char) * (l + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[i] = str[i]) != '\0')
		i++;
	return (duplicate);
}
