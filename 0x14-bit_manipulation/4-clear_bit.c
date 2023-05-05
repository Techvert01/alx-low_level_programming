#include "main.h"

/**
 * clear_bit - declare the value of a bit to 0 at a given index
 * @n: num  of i
 * @index: begins from 0 of the bit you want to set
 * Return: 1 if it work, or -1 if there is an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	*n = *n & i;

	return (1);
}
