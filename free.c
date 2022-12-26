#include "shell.h"
/**
 * free_dp - free all files
 * @line: double pointer to the free
 *
 * Return: ptr null
 */

char **free_dp(char **line)
{
	int y;

	for (y = 0; line[y]; y++)
	{
		free(line[y]);
		line[y] = NULL;
	}
	free(line);
	line = NULL;
	return (NULL);
}
