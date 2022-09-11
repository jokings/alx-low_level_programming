#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase,
 * then in uppercase
 *
 * Description: you can use the putchar
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
