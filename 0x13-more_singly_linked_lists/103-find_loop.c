#include "lists.h"

/**
 * find_listint_loop - function
 * @head: linked
 *
 * Return: NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl = head;
	listint_t *sp = head;

	if (!head)
	return (NULL);

	while (sl && sp && sp->next)
	{
	sl = sl->next;
	sp = sp->next->next;
	if (sp == sl)
	{
	sl = head;
	while (sl != sp)
	{
	sp = sp->next;
	sl = sl->next;
	}
	return (sp);
	}
	}

	return (NULL);
}
