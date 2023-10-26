#include "main.h"

/**
 * flip_bits - number of bits
 * number to another
 * @n: first
 * @m: second
 *
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cou = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = exclusive >> i;
		if (curr & 1)
			cou++;
	}

	return (cou);
}
