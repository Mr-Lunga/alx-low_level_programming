#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program entry point
 * Description: Generates keygen of characters, with the last character being
 * the difference between the total number of character generated and 2772
 * Return: 0
 */
int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
