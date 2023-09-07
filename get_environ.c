#include "shell.h"

/**
 * _getenv - Get the value of an env variable
 * @name: Name of the env
 *
 * Return: Value of the env variable, if it does not exist NULL
 */
char *_getenv(const char *name)
{
	char **env;
	size_t name_len = _strlen(name);

	for (env = environ; *env != NULL; env++)
	{
		if (_strncmp(*env, name, name_len) == 0 && (*env)[name_len] == '=')
		{
			return (&(*env)[name_len + 1]);
		}
	}

	return (NULL);
}
