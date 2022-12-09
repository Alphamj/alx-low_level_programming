#include <stdio.h>

/**
 * main - When I was having that alphabet soup, I never thought that it would pay off
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
