#include "shell.h"

/**
 * shell_cd - Changes the directory of the shell
 * @args: the pointer to an arguments array
 */
void shell_cd(char **args)
{
	char *dir = args[1];
	int pow;

	if (dir == NULL)
	{
		dir = _getenv("HOME");
		if (dir == NULL)
		{
			_puts("cd: HOME Directory Not Detected\n");
			return;
		}
	}

	pow = chdir(dir);
	if (pow == -1)
	{
		perror("cd");
	}
}
