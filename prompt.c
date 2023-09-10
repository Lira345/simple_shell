#include "shell.h"

/**
 * prompt - Displays a command prompt to the user in input
 * Return: Nothing.
 */
void prompt(void)
{
	_puts(PROMPT);
	fflush(stdout);
}
