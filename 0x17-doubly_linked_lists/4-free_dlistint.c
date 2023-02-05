#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: Pointer to head of doubly linked list to free
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
