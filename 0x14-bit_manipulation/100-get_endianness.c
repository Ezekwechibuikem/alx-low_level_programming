#include "main.h"

/**
 * get_endianness - big endian
 * Return: big and little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
