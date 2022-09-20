#include <stdio>
#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */

void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}


