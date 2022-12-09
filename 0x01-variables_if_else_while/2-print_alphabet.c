#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char val;

	for (val = 'a'; val <= 'z'; val++)
		putchar(val);

	putchar('\n');

	return (0);
}
