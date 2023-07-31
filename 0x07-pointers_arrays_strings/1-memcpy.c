#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = 0;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
