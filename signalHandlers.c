#include "shell.h"

/**
 * handle_sigint - Signal handler for SIGINT,
 * (CTRL+C)
 * @sig: Signal num
 * Return: Nothing
 */
void handle_sigint(int sig)
{
	(void) sig; /* Unused parameter */
	_putchar('\n');
	prompt();
}

/**
 * handle_sigquit - Signal handler for SIGQUIT,
 * (Ctrl+\)
 * @sig: Signal num.
 * Return: Nothing.
 */
void handle_sigquit(int sig)
{
	(void) sig; /* Unused parameter */
	_puterror("Process terminated with core dump\n");
	exit(EXIT_SUCCESS);
}

/**
 * handle_sigstp - Signal handler for SIGTSTP,
 * (Ctrl+Z)
 * @sig: Signal num.
 * Return: Nothing.
 */
void handle_sigstp(int sig)
{
	(void) sig; /* Unused parameter */
	_puts("\n");
	prompt();
}
