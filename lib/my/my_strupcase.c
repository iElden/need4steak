/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** Function that puts letter of every word in it in uppercase.
*/

char *my_strupcase(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[i] <= 'z'&& str[i] >= 'a')
			str[i] = str[i] - 32;
		i++;
	}
}
