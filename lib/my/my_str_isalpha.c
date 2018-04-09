/*
** EPITECH PROJECT, 2017
** my_str_isalpha.c
** File description:
** Function that returns 1 if only alpha char.
*/

int letter(char const *str, int i)
{

	if (str[i] >= 'a' && str[i] <= 'z'|| str[i] >= 'A' && str[i] <= 'Z')
		return (0);
	else
		return (1);
}

int my_str_isalpha(char const *str)
{
	int i = 0;
	int a = 0;

	while (str[i] != '\0' && a == 0) {
		a = letter(str, i);
		i++;
	}
	if (a == 0 || str[0] == '\0')
		return (1);
	else
		return (0);
}
