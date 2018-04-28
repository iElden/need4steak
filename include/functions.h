/*
** EPITECH PROJECT, 2017
** functions header
** File description:
** Contains all functions prototypes
*/

#ifndef _FUNCTION_H_
#define _FUNCTION_H_

#include <stdbool.h>

char	*exec_command(char *cmd, bool return_result);
char	**split(char *str, char separator);
char	*get_next_line(int fd);
void	ai(void);

#endif
