#include "main.h"

/**
 * _strlen - find length of string
 * @s: string that will be counted
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
