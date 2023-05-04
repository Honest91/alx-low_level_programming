#include "main.h"

/**
 * get_endianness - to check  a machine is little or big endian
 * Return: 0 if big, 1 if little
 * by mario mokhles
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *d = (char *) &a;

	return (*d);
}

