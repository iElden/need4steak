/*
** EPITECH PROJECT, 2018
** exec_command
** File description:
** exec_command
*/

#include "gnl.h"
#include "printf.h"

char	*exec_command(char *cmd, _Bool need_return)
{
	char	buffer;

	if (!buffer)
		return (NULL);
	my_putstr(cmd);
        buffer = get_next_line(0);
	my_putstr_stderr(buffer);
	if (need_return)
		return (buffer);
	free(buffer);
	return (NULL);
}
