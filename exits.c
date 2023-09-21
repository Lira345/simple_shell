#include "shell.h"

/**
 **_strncpy - copy a string
 *@dest: the destination string to be copied to
 *@src: the source string
 *@n: the num of characters to be copied
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int m, k;
	char *s = dest;

	m = 0;
	while (src[m] !=  '\0' && m < n - 1)
	{
		dest[m] = src[m];
		m++;
	}
	if (m < n)
	{
		k = m;
		while (k < n)
		{
			dest[k] = '\0';
			k++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings
 *@dest: 1st string
 *@src: second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, k;
	char *s = dest;

	m = 0;
	k = 0;
	while (dest[m] != '\0')
	m++;
	while (src[k] != '\0' && k < n)
	{
		dest[m] = src[k];
		m++;
		k++;
	}
	if (k < n)
		dest[k] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string
 *@s: the string to be parsed
 *@c: the char to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}

