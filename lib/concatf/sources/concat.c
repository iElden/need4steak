/*
** EPITECH PROJECT, 2018
** concat.c
** File description:
** concatenates two strings
*/

#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "my.h"

char	*concat(char *str1, char *str2, bool free1, bool free2)
{
	char	*result;

	if (!str1 || !str2) {
		if (free1)
			free(str1);
		if (free2)
			free(str2);
		return (NULL);
	}
	result = malloc(my_strlen(str1) + my_strlen(str2) + 1);
	if (!result)
		return (NULL);
	strcpy(result, str1);
	strcat(result, str2);
	if (free1)
		free(str1);
	if (free2)
		free(str2);
	return (result);
}
