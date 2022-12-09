#include <stdio.h>

/**
 * main - Task 7
 *
 * Return: Always 0
 */
int main(void)
{
	char val;

	for (val = 'z'; val >= 'a'; val--)
		putchar(val);

	putchar('\n');

	return (0);
}
