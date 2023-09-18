#include "main.h"

/**
 * swap_int - the function name
 * @a: working with paramter a
 * @b: working with two parameter b
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
