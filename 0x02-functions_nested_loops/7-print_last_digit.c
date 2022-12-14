#include "main.h"

/**
 * print_last_digit - Entry point
 * @nld: number's last digit
 * Return: returns a value
 */
int number_last_digit(int nld)
{
	int pld;

	pld = (nld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld);
	}
	_putchar(pld + '0');

	return (pld);
}
