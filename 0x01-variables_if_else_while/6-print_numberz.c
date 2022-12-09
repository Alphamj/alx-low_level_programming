#include <stdio.h>

/**
 * main - Task 6
 *
 * Return: Always 0
 */
int main(void)
{
	int val;

	for (val = 0; val < 10; val++)
		putchar((val % 10) + '0');

	putchar('\n');

	return (0);
}
