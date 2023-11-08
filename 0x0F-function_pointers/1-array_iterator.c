#include "function_pointers.h"

/**
  * array_iterator - iterates array
  * @array: var1
  * @size: var2
  * @action: var3
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
