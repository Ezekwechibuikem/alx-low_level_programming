#include "main.h"

/**
 * set_bit - index to 1
 * @n: number to change
 * @index: set to 1
 *
 * Return: success and failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
