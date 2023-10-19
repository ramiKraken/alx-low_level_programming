#include "main.h"

/**
 * leet - function encodes a string into 1337
 * @str: strings no be encoded
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtlL";
	char d[] = "4433007l11";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);
}
