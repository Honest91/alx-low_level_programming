include "main.h"

/**
 * set_bit - about sets a bit at  given index to 1
 * @n: pointer to change number
 * @index: index of  bit to set  1
 *
 * Return: 1 for success, -1 for fail
 * by mario mokhles
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

