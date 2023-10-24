#include "lists.h"

/**
 * listint_len - This function returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: Returns number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t chi = 0;

	while (h)
	{
	chi++;
	h = h->next;
	}

	return (chi);
}
