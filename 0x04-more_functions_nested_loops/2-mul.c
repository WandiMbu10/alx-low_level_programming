#include "main.h"

/**
 * mul - function that multiplies two integers
 * @a: int to be checked
 * @b: int to be checked
 * Return: 0 Always
 */
int mul(int a, int b)
{
	int product = (0);

	for (int i = 0; i < b; i++)

		product += a;
	return (product);
}
