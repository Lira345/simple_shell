#include "shell.h"

/**
 * get_path - returns the value of the PATH env variable
 *
 * Return: pointer to the value of $PATH.
 */
char *get_path(void)
{
	return (_getenv("PATH"));
}
