#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input the string
 * Return: nothing
 */
void puts_half(char *str);
{
	int len = 0;
	int half, i;

	while (str[len] != '\0')
	{
		len++;
	}

	half = (len - 1) / 2;

	for (i = (half + 1); i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
