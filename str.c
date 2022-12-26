#include "shell.h"
/**
 * _strtok - Split to token of strok
 * @line_message: recieved to user
 * Return: the stark
 */
char **_strtok(char *line_message)
{
	char *unlimited = " ,!¡¿?'\"\n\t";
	char *stark = NULL, **array = NULL;
	int i = 0;

	if (line_message == NULL)
	{
		return (NULL);
	}

	array = malloc(_strlen(line_message) + 1024);

	stark = strtok(line_message, unlimited);
	array[i] = stark;

	while (stark)
	{
		i++;
		stark = strtok(NULL, unlimited);
		array[i] = stark;
	}
	i++;
	array[i] = NULL;
	return (array);
}
