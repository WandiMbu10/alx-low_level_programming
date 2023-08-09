#include "main.h"
#include <stdio.h>
#include <stlib.h>

/**
 * *create_array - creates an arrays of chars
 * @size: size of array
 * @c: char to assign
 * Return: pointer or Null
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (Null);
	}
	char *array = malloc(size * sizeof(char));

	if (array == Null)
	{
		return (Null);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
