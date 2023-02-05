#include "lists.h"

/**
 * dlistint_len - Gets the length of the list
 * @h: Head of the list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	return (nodes);
}
