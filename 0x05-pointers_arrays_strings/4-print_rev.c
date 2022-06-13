#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to reverse
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		1++;
	i--;
	for (; i >= 0; i--)
		_putchar(*(s + i));
	_putchar('\n');
}
