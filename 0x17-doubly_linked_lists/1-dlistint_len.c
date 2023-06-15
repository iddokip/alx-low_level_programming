#include "lists.h"

/**
 * dlistint_len - Entry code
 * Description: function that returns the number of elements
 * @h: pointer to the list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
