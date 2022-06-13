#include "main.h"

/**
 * rev_string - Function prototype
 * Description: Reverses a string
 *@s: The string to reserve string
 *Return: Nothing
 */
void rev_string(char *s)
{
	char *r = s;

	while (*(r + 1) != '\0')
		r++;

	while (r > s)
	{
		char tmp = *r;
		*r-- = *s;
		*s++ = tmp;
	}
}
