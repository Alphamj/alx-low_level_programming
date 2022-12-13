nclude "main.h"

/**
 * print_alphabet_10x - Prints 10x the alphabet
 *
 * Return: 10x a-z
 */
void print_alphabet_10x(void)
{
	int n, co;

	co  = 0;

	while (co < 10)
	{
		for  (n = 'a'; n <= 'z'; n++)
			_putchar(n);

		co++;
		_putchar('\n');
	}
}
