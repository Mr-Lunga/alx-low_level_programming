#include "main.h"

/**
 * _strcpy - Function prototype
 * Description: Copies the string pointed to by src to the buffer pointed
 * to by dest
 * @dest: pointer to the destionation array where to the content is be copied
 * @src: Pointer to the string we want to copy
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *(src + i) != '\0'; i++)
		dest[i] = *(src + i);

	dest[i] = '\0';

	return (dest);
}
