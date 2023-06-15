#include "lists.h"

/**
 * print_dlistint - Entry Point
 * Description: Function that prints all the elements of a dlistint_t list
 * @h: Pointer to the list.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current)
	{
		printf("%i\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}

