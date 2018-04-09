/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** Function that reverses a string.
*/

char *my_revstr(char *str)
{
	int start = 0;
	int end = 0;
	char n;

	while (str[end] != '\0') {
		end += 1;
	}
	while (start <= end) {
		n = str[end];
		str[start] = str[end];
		str[end] = n;
		start++;
		end--;
	}
	return (str);
}
