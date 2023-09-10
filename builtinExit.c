#include "shell.h"

/**
 * shell_exit - Exits the command line shell.
 * @args: the pointer to an arguments of array
 * Return: Nothing.
 */
void shell_exit(char **args)
{
	int status = 0;

	if (args[1] != NULL)
	{
		status = _atoi(args[1]); /*Converts string to integer*/
	}

	free_tokens(args);
	free_last_input();
	exit(status);
}
