#include "shell.h"

/**
 * shell_setenv - Sets an environment variable value
 * @args: the pointer to arguments (naam and environ var value.)
 * Return: Nothing.
 */
int shell_setenv(char **args)
{
	char *naam;
	char *val;

	if (args[1] == NULL || args[2] == NULL)
	{
		_puterror("Usage: setenv VARIABLE VALUE\n");
		return (-1);
	}

	naam = args[1];
	val = args[2];

	if (setenv(naam, val, 1) != 0)
	{
		_puterror("setenv");
		return (-1);
	}

	return (0);
}

/**
 * shell_unsetenv - Unsets an environment variable value
 * @args: the pointer to arguments (naam of the environ variable)
 * Return: Nothing.
 */
int shell_unsetenv(char **args)
{
	char *naam;

	if (args[1] == NULL)
	{
		_puterror("Usage: unsetenv VARIABLE\n");
		return (-1);
	}

	naam = args[1];

	if (unsetenv(naam) != 0)
	{
		_puterror("unsetenv");
	}

	return (0);
}
