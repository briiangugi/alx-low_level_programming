#include "main.h"

/**
 * _issuper - Returns 1 if c is uppercase
 * else, return 0 if otherwise
 *
 * @c:input number as an integer
 * Return:1 if success
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

