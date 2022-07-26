#include "main.h"

/**
 * _strlen - Function prototype
 * Description: Computes the length of a string
 * @s: The string to check the length of
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * create_file - Function prototype
 * Description: Creates a file
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int len;
	int out;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}

	len = _strlen(text_content);
	out = write(file, text_content, len);

	if (close(file) == -1 || out == -1)
		return (-1);

	return (1);
}
