#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t list
 * @head: pointer to head of list
 * Return: returns sum of all the data (n) of a dlistint_t list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
