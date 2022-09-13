#include "main.h"

/**
 * print-alphabet - a function that prints the alphabet, in lowrcase,
 * follwed by a new line
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
