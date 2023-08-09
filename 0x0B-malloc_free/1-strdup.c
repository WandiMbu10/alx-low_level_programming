#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: char
 * Return: NULL
 */

char *_strdup(char *str)
{
	char *j;
	int i, 1 = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	j = malloc(sizeof(char) * (i + 1));

	if (j == NULL)
		return (NULL);

	for (1 = 0; str[1]; 1++)
		j[1] = str[1];

	return (j);
}
