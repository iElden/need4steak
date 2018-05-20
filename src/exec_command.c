/*
** EPITECH PROJECT, 2018
** exec_command
** File description:
** exec_command
*/

#include "functions.h"
#include "macros.h"
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int	my_putstr(char *str, int fd)
{
	return (write(fd, str, strlen(str)));
}

void	check_finish(char *buffer)
{
	if (strstr(buffer, "Track Cleared") != NULL) {
		free(buffer);
		exit(EXIT_SUCCESS);
	}
}

char	*exec_command(char *cmd, bool need_return)
{
	char	*buffer;

	my_putstr("Executing command: ", 2);
	my_putstr(cmd, 2);
	my_putstr(cmd, 1);
	buffer = get_next_line(0);
	if (!buffer)
		return (NULL);
	my_putstr(buffer, 2);
	my_putstr("\n", 2);
	if (strstr(buffer, "KO") != NULL) {
		free(buffer);
		exit(EPITECH_FAILURE);
	}
	check_finish(buffer);
	if (need_return)
		return (buffer);
	free(buffer);
	return (NULL);
}
