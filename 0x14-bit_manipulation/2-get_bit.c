#include "main.h"

/**
 * get_bit - function that returns value of
 * bit at an index at a decimal number
 * @n: Searched number
 * @index: index of bit
 *
 * Return: value of  bit
 * by mario mohles
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

