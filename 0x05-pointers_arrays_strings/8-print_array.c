#include <stdio.h>
#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array
 * @n: is the number of elements OF the array to be printed
 * Return:nnothing
 */
void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);
	}
	putchar(10);
}

