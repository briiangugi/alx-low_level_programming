#include "main.h"

/**
 * flip_bits - count the bit to change to another value
 * @n: first number
 * @m: second number
 * Return: the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int y;

	y = 0;
	n = n ^ m;

	while (n)

	{
		y += n & 1;
		n >>= 1;
	}
	return (y);
}
