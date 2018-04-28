/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** my_strlen
*/

#include <string.h>

char	*my_strdup(char *str)
{
	return (strdup(str));
}

int	my_strlen(char *str)
{
	return (strlen(str));
}

int	my_pow(int nbr, int n)
{
	int	result = 1;

	for (int i = 0; i < n; i++)
		result *= nbr;
	return (result);
}
