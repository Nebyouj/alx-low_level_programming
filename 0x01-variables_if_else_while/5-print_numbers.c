#include <stdio.h>

/**
 * main - lists numbers of base 10 starting from 0 followed by a new line
 *
 * Return: always 0 (SUCCESS)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
