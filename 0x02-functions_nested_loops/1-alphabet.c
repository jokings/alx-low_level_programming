#include <main.h>
/**
 * main - a function that prints the alphabet, in lowercase,
 * followed by a nw line.
 *
 * Return: void
 */
void print_alphabet(void)
{
	int n;

	for (n= 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n')
}
