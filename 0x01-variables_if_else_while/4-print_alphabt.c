#include <stdio.h>

/**
 * main - Task 4
 *
 * Return: Always 0
 */
int main(void)
{
	char val;

	for (val = 'a'; val <= 'z'; val++)
	{
		if (val != 'e' && val != 'q')
			putchar(val);
	}
	putchar('\n');

	return (0);
}
