#include "shell.h"

/**
 * free_error - frees allocated pointers according to system error
 * @argv: pointer to a pointer to an array of pointers
 * @arg: pointer to a pointer to an array of characters
 *
 * Return: void
 */
void free_error(char **argv, char *arg)
{
	int m;

	for (m = 0; argv[m]; m++)
		free(argv[m]);
	free(argv);
	free(arg);
	exit(EXIT_FAILURE);
}

/**
 * free_tokens - frees memory allocated dynamically by tokenize()
 * @ptr: pointer
 *
 * Return: void
 */
void free_tokens(char **ptr)
{
	int m;

	for (m = 0; ptr[m]; m++)
		free((ptr[m]));
	free(ptr);
}


/**
 * free_path - Frees the global variable containing the path env
 *              variable value
 *
 * Return: Nothing
 */
void free_path(void)
{
	if (environ != NULL)
	{
		size_t m = 0;

		while (environ[m] != NULL)
		{
			if (_strncmp(environ[m], "PATH=", 5) == 0)
			{
				free(environ[m]);
				environ[m] = NULL;
				break;
			}
			m++;
		}
	}
}
