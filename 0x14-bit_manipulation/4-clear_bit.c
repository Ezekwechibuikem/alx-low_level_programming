#include "main.h"

/**
 * clear_bit - value bit to 0
 * @n: number to change
 * @index: index
 *
 * Return: success and failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
