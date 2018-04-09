/*
** EPITECH PROJECT, 2017
** my_str_isprintable.c
** File description:
** Function that returns 1 if only printable char.
*/

int letter5(char const *str, int i)
{

	if (str[i] >= 32 && str[i] <= 176)
		return (0);
	else
		return (1);
}

int my_str_isprintable(char const *str)
{
	int i = 0;
	int a = 0;

	while (str[i] != '\0' && a == 0) {
		a = letter5(str, i);
		i++;
	}
	if (a == 0 || str[0] == '\0')
		return (1);
	else
		return (0);
}
