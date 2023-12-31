#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @str: The string to calculate the length of
 *
 * Return: The length of the string
 */

unsigned int _strlen(char *str);

/**
 * string_nconcat - Concatenates the first n bytes
 * of string 2 with the full String1
 * gives NULL if memory allocation fails
 * @s1: Given String One
 * @s2: String to be concatenate with s1
 * @n: Given number of bytes (characters) to be copied from s2
 * Return: Either NULL or newptr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size_s1, size_s2, i, j;
	int newlength;
	char *newptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size_s1 = _strlen(s1);
	size_s2 = _strlen(s2);

	if (n < size_s2)
		size_s2 = n;

	newlength = (size_s1 + size_s2 + 1);
	newptr = malloc(sizeof(char) * newlength);

	if (!newptr)
		return (NULL);

	for (i = 0; i < size_s1; i++)
		newptr[i] = s1[i];
	for (j = 0; j < size_s2; j++)
		newptr[i + j] = s2[j];
	newptr[i + j] = '\0';

	return (newptr);
}

/**
 * _strlen - Calculates the length of a string
 * @str: The string to calculate the length of
 *
 * Return: The length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int count = 0;

	while (*str)
	{
		count++;
		str++;
	}

	return (count);
}
