#include "main.h"

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
