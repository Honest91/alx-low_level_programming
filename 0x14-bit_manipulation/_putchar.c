#include "main.h"
#include <unistd.h>
/**
 * _putchar - to write the character c to stdout
 * @c: character to be print
 *
 * Return: 1. on success
 * On error, -1 is returned
 * By mario mokhles
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
