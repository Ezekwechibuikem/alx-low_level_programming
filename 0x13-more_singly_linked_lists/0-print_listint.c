#include "lists.h"

/**
 * print_listint - fun
 * @h: linked list 
 * 
 * Return: number
 */
size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		number++;
	}

	return (number);
}
