#include "shell.h"

/**
 * tokenize - Parsing user input into arguments
 *            by splits an array string into tokens using a delimiter.
 * @str: The string to be tokenized.
 * @delim: The delimiter used to split the string.
 *
 * Return: An array of pointers to the tokens,
 *         or if an error occurs NULL
 */
char **tokenize(char *str, const char *delim)
{
	char *token = NULL;
	char **ret = NULL;
	int m = 0;

	token = strtok(str, delim);
	while (token)
	{
		ret = realloc(ret, sizeof(char *) * (m + 1));
		if (ret == NULL)
			return (NULL);

		ret[m] = malloc(_strlen(token) + 1);
		if (!(ret[m]))
			return (NULL);

		_strcpy(ret[m], token);
		token = strtok(NULL, delim);
		m++;
	}
	ret = realloc(ret, (m + 1) * sizeof(char *));
	if (!ret)
		return (NULL);

	ret[m] = NULL;
	return (ret);
}

/**
 * tokenize_input - separate a user input string into tokens with tokenize().
 * @input: the user input string to be tokenized
 *
 * Return: an array of pointers to the tokens, or if an error occurs NULL
 */
char **tokenize_input(char *input)
{
	char **tokens = NULL;
	char *tmp = NULL;

	tmp = _strdup(input);
	if (tmp == NULL)
	{
		_puts("Memory allocation error\n");
		exit(EXIT_FAILURE);
	}

	tokens = tokenize(tmp, " \t\r\n\a");
	free(tmp);

	return (tokens);
}
