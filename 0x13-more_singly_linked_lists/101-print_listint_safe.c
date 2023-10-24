#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts
 * @head: A pointer
 *
 * Return: return
 * Otherwise - the number
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tort, *har;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	tort = head->next;
	har = (head->next)->next;

	while (har)
	{
	if (tort == har)
	{
	tort = head;
	while (tort != har)
	{
	node++;
	tort = tort->next;
	har = har->next;
	}

	tort = tort->next;
	while (tort != har)
	{
	node++;
	tort = tort->next;
	}

	return (node);
	}

	tort = tort->next;
	har = (har->next)->next;
	}

	return (0);
	}

/**
 * print_listint_safe - Prints
 * @head: A pointer
 *
 * Return: The number
 */
	size_t print_listint_safe(const listint_t *head)
	{
	size_t node, index = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
	for (; head != NULL; node++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	}

	else
	{
	for (index = 0; index < node; index++)
	{
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}

	printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
