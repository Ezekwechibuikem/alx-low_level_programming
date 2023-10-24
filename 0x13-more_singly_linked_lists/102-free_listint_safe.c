#include "lists.h"

/**
 * free_listint_safe - cool
 * @h: pointer
 *
 * Return: number
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int difference;
	listint_t *tems;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	difference = *h - (*h)->next;
	if (difference > 0)
	{
	tems = (*h)->next;
	free(*h);
	*h = tems;
	lenght++;
	}
	else
	{
	free(*h);
	*h = NULL;
	lenght++;
	break;
	}
	}

	*h = NULL;

	return (lenght);
}
