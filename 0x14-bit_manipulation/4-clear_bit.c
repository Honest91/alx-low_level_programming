#include "main.h"

/**
 * clear_bit - about sets  value of a  bit to 0
 * @n: pointer to change number
 * @index: index of  bit to clear
 *
 * Return: 1 for success, -1 for fail
 * by mario mokhles
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

