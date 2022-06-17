#include "main.h"

/**
 * _strncpy - Function prototype
 * Desscription: Copies the first and characters of the string piont to by src,
 * including the termination null byte ('\0'), to the buffer pointed to by dest
 * @dest: Pointer to the destination string
 * @src: Pointer to the string to be copied
 * @n: Number of bytes to copy
 * Return: The pionter to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src [i]; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
