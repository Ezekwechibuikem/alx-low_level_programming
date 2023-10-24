#include "lists.h"

/**
 * insert_nodeint_at_index - new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *nat;
	listint_t *tems = *head;

	nat = malloc(sizeof(listint_t));
	if (!nat || !head)
	return (NULL);

	nat->n = n;
	nat->next = NULL;

	if (idx == 0)
	{
	nat->next = *head;
	*head = nat;
	return (nat);
}

	for (a = 0; tems && a < idx; a++)
	{
	if (a == idx - 1)
	{
	nat->next = tems->next;
	tems->next = nat;
	return (nat);
	}
	else
	tems = tems->next;
	}

	return (NULL);
}
