#include "main.h"
/**
 * _isupper - shows if c is uppercase
 *
 * @c: parameter
 * Return: 1 if upper and 0 if lower
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
