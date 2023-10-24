#include "lists.h"

/**
 * add_nodeint - This function adds a new node
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: Returns pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *file;

	file = malloc(sizeof(listint_t));
	if (!file)
	return (NULL);

	file->n = n;
	file->next = *head;
	*head = file;

	return (file);
}
