/*
** EPITECH PROJECT, 2017
** my_str_isupper.c
** File description:
** Function that returns 1 if the string passed as parameter only uppercase.
*/

int letter4(char const *str, int i)
{

	if (str[i] >= 'A' && str[i] <= 'Z')
		return (0);
	else
		return (1);
}

int my_str_isupper(char const *str)
{
	int i = 0;
	int a = 0;

	while (str[i] != '\0' && a == 0) {
		a = letter4(str, i);
		i++;
	}
	if (a == 0 || str[0] == '\0')
		return (1);
	else
		return (0);
}
