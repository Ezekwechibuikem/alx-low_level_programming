#include "lists.h"

/**
 * delete_nodeint_at_index - deletes
 * @head: pointer
 * @index: index
 *
 * Return: 1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tems = *head;
	listint_t *curry = NULL;
	unsigned int e = 0;

	if (*head == NULL)
	return (-1);

	if (index == 0)
	{
	*head = (*head)->next;
	free(tems);
	return (1);
	}

	while (e < index - 1)
	{
	if (!tems || !(tems->next))
	return (-1);
	tems = tems->next;
	e++;
	}


	curry = tems->next;
	tems->next = curry->next;
	free(curry);

	return (1);
}
