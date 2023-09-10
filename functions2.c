#include "shell.h"

/**
 * _strcpy - Copies a string from one location in memory to another.
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string to be copied
 * Return: Pointer to destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int m = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[m])
	{
		dest[m] = src[m];
		m++;
	}
	dest[m] = 0;
	return (dest);
}

/**
 * _strcat - Concatenates one string to the end of another string.
 * @dest: A pointer to the destination string
 * @src: A pointer to the source string.
 * Return: Pointer to destination string.
 */
char *_strcat(char *dest, const char *src)
{
	char *concatenatedString = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (concatenatedString);
}

/**
 * _strdup - Duplicates a given string.
 * @str: A pointer to the string you want to duplicate.
 * Return: The pointer to the duplicated string.
 */
char *_strdup(const char *str)
{
	int len = 0;
	char *concatenatedString;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str++)
		len++;
	concatenatedString = malloc(sizeof(char) * (len + 1));
	if (!concatenatedString)
		return (NULL);
	for (len++; len--;)
		concatenatedString[len] = *--str;
	return (concatenatedString);
}

/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to be printed.
 * Return: 0 (on success), -1 on error and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strspn - Calculates the length of initial segment of string.
 * @s: The string to calculate initial segment length
 * @accept: The set of chars with valid initial segment.
 * Return: Total bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m = 0;
	unsigned int n = 0;

	while (s[m])
	{
		while (accept[n])
		{
			if (s[m] == accept[n])
				break;
			n++;
		}

		if (!accept[n])
			return (m);

		m++;
	}
	return (m);
}
