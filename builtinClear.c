#include "shell.h"

/**
 * shell_clear - Clears the webterminal screen.
 * @args: the pointer to an arguments of array.
 * Return: 0 (exit), 1 (continue executing).
 */
int shell_clear(char **args)
{
	(void)args;
	_puts("\033[2J\033[H");
	return (1);
}
