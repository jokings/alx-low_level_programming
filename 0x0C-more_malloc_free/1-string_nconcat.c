#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * string_nconcat - len of 1st str, len of 2nd str, if n < 2nd, 2nd = n
 * 2nd + 1st = total len, malloc + null byte, loop to insert into temp arr
 * @s1: input one
 * @s2: input two
 * @n: s2's number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
		n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);

	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

	return (p);
}
