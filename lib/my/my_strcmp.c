/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** The same like strncmp fonction.
*/

int my_strcmp(char const *s1, char const *s2)
{
	int n = 0;

	while (s1[n] == s2[n] && s1[n] != '\0' && s2[n] != '\0') {
		n++;
	}
	return (s1[n] - s2[n]);
}
