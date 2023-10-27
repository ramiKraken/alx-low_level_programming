#include "main.h"

/**
 * _isdigit -checks from 0 to 9
 * @c: parameter
 * Return: 1 if it is digit and 0 if it is not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
