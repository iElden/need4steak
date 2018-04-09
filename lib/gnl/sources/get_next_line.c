/*
** EPITECH PROJECT, 2018
** Get_next_line
** File description:
** return a readed file line by line
*/

#include <unistd.h>
#include <stdlib.h>
#include "gnl.h"

char *my_gnl_strcat(char *s1, char *s2)
{
	int s1_len = -1;
	int s2_len = -1;
	char *result = NULL;

	if (!s1)
		return (s2);
	if (!s2)
		return (s1);
	while (s1[++s1_len]);
	while (s2[++s2_len]);
	result = malloc(s1_len + s2_len + 1);
	if (!result)
		return (NULL);
	for (int i = 0; s1[i]; i++)
		result[i] = s1[i];
	for (int i = 0; s2[i]; i++)
		result[i + s1_len] = s2[i];
	result[s1_len + s2_len] = '\0';
	free(s1);
	free(s2);
	return (result);
}

char *read_file(char *buffer, int fd)
{
	buffer = malloc(READ_SIZE + 1);
	if (!buffer)
		return (NULL);
	int rd = read(fd, buffer, READ_SIZE);
	if (rd == -1)
		return (NULL);
	buffer[rd] = '\0';
	return (buffer);
}

char *copy_to_str(char **ptr, char *str, int *return_value)
{
	char *buffer = *ptr;
	int i;

	str = malloc(READ_SIZE + 1);
	if (!str)
		return (NULL);
	for (i = 0; buffer[0] && (!i || buffer[-1] != '\n'); i++) {
		str[i] = buffer[0];
		buffer ++;
	}
	*ptr = buffer;
	*return_value = i;
	return (str);
}

char *get_next_line(int fd)
{
	static char *buffer = NULL;
	char *str = NULL;
	int i;

	if (!buffer || !buffer[0])
		buffer = read_file(buffer, fd);
	if (!buffer || !buffer[0])
		return (NULL);
	str = copy_to_str(&buffer, str, &i);
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (i && str[i - 1] == '\n')
		str[i - 1] = '\0';
	else
		str = my_gnl_strcat(str, get_next_line(fd));
	return (str);
}
