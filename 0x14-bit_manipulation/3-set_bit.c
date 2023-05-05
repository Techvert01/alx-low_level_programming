#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a specified index
 * @index: begin from 0 of the bit you want to set
 * @n: points to number of i
 * Return: 1 if it work, or -1 if there is an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	*n = *n | i;

	return (1);
}
