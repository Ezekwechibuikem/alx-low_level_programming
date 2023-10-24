#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nat;
	listint_t *sun = *head;

	nat = malloc(sizeof(listint_t));
	if (!nat)
	return (NULL);

	nat->n = n;
	nat->next = NULL;

	if (*head == NULL)
	{
	*head = nat;
	return (nat);
	}

	while (sun->next)
	sun = sun->next;

	sun->next = nat;

	return (nat);
}
