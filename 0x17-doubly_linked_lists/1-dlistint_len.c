#include "lists.h"

/**
 * dlistint_len - elements in a linked dlistint_t list
 * @h: head of list
 * Return: linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		num_nodes++;
		h = h->next;
	}
	return (num_nodes);
}
