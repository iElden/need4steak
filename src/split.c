/*
** EPITECH PROJECT, 2018
** split
** File description:
** split
*/

#include "functions.h"
#include <stdlib.h>
#include <string.h>

char	**split(char *str, char c)
{
	int	spaces = 0;
	char	**result = 0;
	int	index = 0;

	if (!str)
		return (NULL);
	str = strdup(str);
	for (int i = 0; str[i]; i++)
		spaces += str[i] == c;
	result = malloc((spaces + 2) * sizeof(*result));
	if (!result)
		return (NULL);
	result[0] = str;
	for (int i = 0; str[i]; i++)
		if (str[i] == c) {
			index++;
			str[i] = 0;
			result[index] = &str[i + 1];
		}
	return (result);
}
