#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: is  integer to swap
 * @b: is integer to swap
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
