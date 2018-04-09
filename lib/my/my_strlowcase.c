/*
** EPITECH PROJECT, 2017
** my_strlowcase.c
** File description:
** Function that puts every letter of every word in it in lowercase.
*/

char *my_strlowcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] <= 'Z'&& str[i] >= 'A')
			str[i] = str[i] + 32;
		i++;
	}
}
