#include "main.h"

/**
 * _islower - check lower case characters
 *
 * @c: checking parameter
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
