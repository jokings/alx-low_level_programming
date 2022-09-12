#include <stdio.h>
/**
 * main - a progranm that prints the lowercase alphabet
 * in reverse, followed by a new line
 * you can onl use putchar
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');
	return (0);
}
