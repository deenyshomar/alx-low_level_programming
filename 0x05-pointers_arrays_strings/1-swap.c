#include "main.h"

/**
 * swap_int - swaps 2 integers
 *
 * @a: pointer to an integer
 *
 * @b: pointer to an integer
 *
 * Return : nothing
 *
 */
void swap_int(int *a, int *b)
{
	int d = *a;
	int s = *b;

	*a = s;
	*b = d;
}
