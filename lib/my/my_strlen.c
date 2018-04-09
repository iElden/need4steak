/*
** EPITECH PROJECT, 2017
** my_strlen.c
** File description:
** Counts and returns the number of characters found in the string.
*/

int my_strlen(char const *str)
{
	int n = 0;

	while (str[n] != '\0') {
		n += 1;
	}
	return (n);
}
