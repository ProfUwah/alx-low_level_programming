#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string, in reverse
 * @s: String to reverse
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
