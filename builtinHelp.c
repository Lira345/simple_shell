#include "shell.h"

/**
 * shell_help - Prints all the help information.
 */
void shell_help(void)
{
	_puts("\nShell Version 1.0.0\n\n");
	_puts("Usage: ./hsh\n\n");
	_puts("Shell built-in commands:\n\n");
	_puts("help\t\tPrints all the help information\n\n");
	_puts("cd [dir]\tChanges the present working directory\n\n");
	_puts("env\t\tDisplay the environ variables\n\n");
	_puts("setenv\t\tSets an environ variable\n\n");
	_puts("unsetenv\tUnsets an environ variable\n\n");
	_puts("exit\t\tExit the command line shell\n\n");
}
