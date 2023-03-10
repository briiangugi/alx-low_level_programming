#include "main.h"

/**
 *_isdigit - checks for a digit 0 through 9
 *
 * @c:input number as integer
 *
 * Return:0 success
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
