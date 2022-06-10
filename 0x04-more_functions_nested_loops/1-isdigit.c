#include "main.h"

/**
 * _isdigit - Function prototype
 * Description: Checks for a digit (0 through 9)
 * @c: The character to be checked
 * Return: 1 if the character id a digit otherwise 0
 */
int _isdigit(int c)
{
	int is_digit = c >= 48 && c <= 57 ? 1 : 0;

	return (is_digit);
}
