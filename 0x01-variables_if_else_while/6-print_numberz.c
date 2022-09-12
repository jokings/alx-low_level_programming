#include <stdio.h>
/**
 * main - a proram that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * you can only use putchar function
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	putchar(d);
	putchar('\n');
	return (0);
}
