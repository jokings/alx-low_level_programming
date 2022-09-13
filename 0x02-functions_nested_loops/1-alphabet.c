#include <main.h>
/**
 * main - a function that prints the alphabet, in lowercase,
 * followed by a nw line.
 *
 * Return: 0
 */
void print_alphabet(void);
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
