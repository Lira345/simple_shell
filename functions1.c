#include "shell.h"

/**
 * _strlen - counts the string length
 * @s: String length to be counted
 * Return: Integer of the string length
 */
int _strlen(const char *s)
{
	int m = 0;

	if (!s)
		return (0);

	while (*s++)
		m++;

	return (m);
}

/**
 * _strcmp - Compares string a and string b.
 * @s1: the first string
 * @s2: the second string
 * Return: if @s1 and @s2 are equivalent 0.
 * if @s1 is subordinate to @s2 (a negative value)
 * if @s1 exceeds @s2 (a positive value).
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return ((int)(*s1) - (int)(*s2));
}

/**
 * _strncmp - Compares a specific length of characters between the two strings
 * @s1: the first string.
 * @s2: the second string.
 * @n: the maximal number of chars to compare.
 * Return: 0 if @s1 and @s2 are equivalent up to n chars.
 * if @s1 is subordinate to @s2 (a negative value)
 * if @s1 exceeds @s2 (a positive value)
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char yin;
	unsigned char yang;

	while (n-- > 0)
	{
		yin = (unsigned char) *s1++;
		yang = (unsigned char) *s2++;

		if (yin != yang)
			return (yin - yang);
		if (yin == '\0')
			break;
	}

	return (0);
}

/**
 * _strstr - Finds the first occurrence of a substring within a larger string.
 * @haystack: The string to search within.
 * @needle: The substring to search for within the haystack string.
 * Return: Pointer of next char of haystack or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int m = 0;

	while (haystack[m] != '\0')
	{
		if (haystack[m] == needle[0])
		{
			int n = 0;

			while (needle[n] != '\0')
			{
				if (haystack[m + n] != needle[n])
				{
					break;
				}
				n++;
			}

			if (needle[n] == '\0')
			{
				return (&haystack[m]);
			}
		}
		m++;
	}

	return (NULL);
}

/**
 * _strchr - Allocates a character in a string.
 * @s: Address of the array of strings input.
 * @c: the character to be allocated from input array.
 * Return: the first occurance of chars or NULL IF not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	/*return null if not found*/
	return (NULL);
}
