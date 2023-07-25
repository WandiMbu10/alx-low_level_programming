#include "main.h"

/**
 * _strlen - checks for  function that returns the length of a string
 * @s: char to be checked
 * return: always 0
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
