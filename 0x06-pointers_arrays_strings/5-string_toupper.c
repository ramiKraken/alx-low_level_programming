#include "main.h"

/**
 * string_toupper - converts lowercase to uppercase
 * @str: string that will be changed
 * Return: pointer to changed string.
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}
