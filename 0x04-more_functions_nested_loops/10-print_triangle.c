#include "main.h"

/**
 * print_triangle - a function that print a triangle, follow by a new line.
 * @size: An input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i = 0, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			-putchar('\n');
		}
	}
	else
		_putchar('\n');
}
