#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowwercase,
 * and then in uppercase, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int lw = 'a';
	int up = 'A';

	while (lw <= 'z')
	{
		putchar(lw);
		lw += 1;
	}
	while (up <= 'Z')
	{
		putchar(up);
		up += 1;
	}
	putchar('\n');
	return (0);
}