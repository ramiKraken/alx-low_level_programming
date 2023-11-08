#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - adds a and b
  * @a: var1
  * @b: var2
  *
  * Return: sum of a and b
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - subtractes a from b
  * @a: var1
  * @b: var2
  *
  * Return: difference of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - function gives multiplication result
  * @a: var1
  * @b: var2
  *
  * Return: result of multiplication
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - function gives division result
  * @a: var1
  * @b: var2
  *
  * Return: result of division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - function gives remainder of operation
  * @a: first_var
  * @b: second_var
  *
  * Return: remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
