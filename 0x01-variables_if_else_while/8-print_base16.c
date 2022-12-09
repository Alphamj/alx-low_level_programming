#include <stdio.h>

/**
 * main - Task 8
 *
 * Return: Always 0
 */
int main(void)
{
	int val;
	char val2;

	for (val = 0; val < 10; val++)
		putchar((val % 10) + '0');
	for (val2 = 'a'; val2 <= 'f'; val2++)
		putchar(val2);

	putchar('\n');

	return (0);
}
