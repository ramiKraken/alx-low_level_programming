#include "main.h"
#include <stdio.h>
int add(int a, int b, int c)
{
	return a+b+c;
}

int main(void)
{
	printf("%d\n", add(5, 2, 3));
}
