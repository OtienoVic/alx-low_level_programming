#include "main.h"
/**
 * swap_int - swaps values of a and b
 * @a: valueof a
 * @b: valueof b
 * Return: 0
 */
void swap_int(int *a, int *b)
{
			int s;

			s = *a;
			*a = *b;
			*b = s;
}
