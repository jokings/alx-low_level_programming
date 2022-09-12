#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that prints all possible different combinations
 * of two digits
 * you can only use putchar five times maximum in your code
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
