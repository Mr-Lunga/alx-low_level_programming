#include <stdio.h>

/**
 * main - program entry point
 * Description: Prints all arguments it receives
 * @argc: The number of arguments passed to the program
 * @argv: Array of strings arguments that were passed to the program
 * Return: 0
 */

int main(const int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
