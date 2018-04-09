/*
** EPITECH PROJECT, 2017
** my_strstr.c
** File description:
** Same than strstr function.
*/

int comp0(char *str, char const *to_find, int i)
{
	int n = 0;

	if (str[i] == to_find[n]) {
		n++;
		comp0(str, to_find, i++);
	} else if (to_find[n] == '\0')
		return (1);
	if (to_find[n] != '\0')
		return (0);
}

char *my_strstr(char *str, char const *to_find)
{
	int i = 0;
	int exit = 0;

	while (str[i] != '\0' && exit == 0) {
		comp0(str, to_find, i);
		i ++;
	}
	if (str[i] == '\0')
		return (0);
	return (&str[i - 1]);
}
