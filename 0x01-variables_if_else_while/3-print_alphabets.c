#include <stdio.h>

/**
 * main - alphABET
 *
 * Return: Always 0
 */
int main(void)
{
	char val;

	for (val = 'a'; val <= 'z'; val++)
		putchar(val);
	for (val = 'A'; val <= 'Z'; val++)
		putchar(val);
	putchar('\n');

	return (0);
}
