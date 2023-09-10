#include "shell.h"

/**
 * shell_env - Displays all the environ variables
 * Return: void.
 */
int shell_env(void)
{
	int m = 0;

	for (m = 0; environ[m]; m++)
	{
		_puts(environ[m]);
		_putchar('\n');
	}

	return (0);
}
