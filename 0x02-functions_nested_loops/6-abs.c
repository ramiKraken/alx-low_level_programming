#include "main.h"

/**
 * _abs - get absolute value of a number
 * @a: parameter
 * Return: -a or a;
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
		return (a);
	return (0);
}
