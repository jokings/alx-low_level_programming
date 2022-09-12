#include <stdio.h>
/**
 * main - a program that prints all possible combinations
 * of a single-digit numbers
 * you can only use putchar four times maximum in your code
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
