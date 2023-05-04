#include "main.h"

/**
 * set_bit - about sets  value of a bit to 1.
 * at a given index.
 * @n: the pointer of  unsigned long int.
 * @index: index of  bit.
 *
 * Return: 1 if  success, -1 if fail.
 * by mario mokhles
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}

