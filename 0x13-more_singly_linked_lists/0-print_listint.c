#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: linked list of type listint_t to print
 *
 * Return: num of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}

	return (num_nodes);
}
