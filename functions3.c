#include "shell.h"

/**
 * _atoi - Converts a string representing an integer into actual integer value
 * @str: The string to be converted.
 * Return: The actual integer value of the string.
 */
int _atoi(const char *str)
{
	int m = 0;
	int pwr = 1;
	unsigned int tmp = 0;

	while (str[m] != '\0')
	{
		if (str[m] == '-')
			pwr *= -1;
		else if (str[m] >= '0' && str[m] <= '9')
			tmp = (tmp * 10) + (str[m] - '0');
		else
			break;
		m++;
	}
	return (tmp * pwr);
}

/**
 * _memset - Fills a block of memory to a specified value
 * @s: memory area.
 * @b: a byte to fill *s.
 * @n: the number of bytes to be filled.
 * Return: A pointer to the memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m = 0;

	for (m = 0; m < n; m++)
		s[m] = b;

	return (s);
}

/**
 * _memcpy - Copies a specified number of bytes from one memory to another.
 * @dest: A pointer to the destination mem location where data will be copied.
 * @src: A pointer to the source memory location from which data will be copied
 * @n: The number of bytes to copy from source to destination.
 * Return: Always 0 (On success).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m = 0;

	for (m < n; m++;)
		dest[m] = src[m];

	return (dest);
}

/**
 * _realloc - Reallocates a block of memory.
 * @ptr: A pointer to the previously allocated memory block to be allocated
 * @old_size: Previous block byte size.
 * @new_size: New block byte size.
 * Return: Pointer to the new block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	tmp = malloc(new_size);
	if (!tmp)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		tmp[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (tmp);
}

/**
 * _calloc - Allocates and initializes a block of memory,
 * for a specified number of elements, each of a specified size.
 * @nmemb: Pointer to size of an array.
 * @size: A specified size of each element.
 * Return: Pointer to newly allocated memory, NULL if fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tmp;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tmp = malloc(nmemb * size);
	if (tmp == NULL)
		return (NULL);

	_memset(tmp, 0, nmemb * size);
	return (tmp);
}
