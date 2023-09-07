#include "shell.h"

/**
 * main - executes a simple shell
 *
 * Return: EXIT_SUCCESS.
 */
int main(void)
{
	char *input;
	char **args;
	int status;


	signal(SIGINT, handle_sigint);
	signal(SIGQUIT, handle_sigquit);
	signal(SIGTSTP, handle_sigstp);

	do {
		input = get_input();
		if (!input || !*input)
			break;

		args = tokenize_input(input);
		if (!args || !*args)
		{
			free(input);
			free_tokens(args);
			continue;
		}
		status = execute(args);
		free(input);
		free_tokens(args);

		status = 1;
	} while (status);

	return (EXIT_SUCCESS);
}
