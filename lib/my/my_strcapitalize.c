/*
** EPITECH PROJECT, 2017
** my_strcapitalize.c
** File description:
** Function that capitalizes the first letter of each word.
*/

int spc(char *str, int i)
{
	if (str[i] == ' ' && str[i + 1] <= 'z' \
&& str[i + 1] >= 'a')
		str[i + 1] = str[i + 1] - 32;
	if (str[i] >= '!' && str[i] <= '/' \
&& str[i + 1] <= 'z' && str[i + 1] >= 'a')
		str[i + 1] = str[i + 1] - 32;
}

int nbr(char *str, int i)
{
	if (str[i] >= '0' && str[i] <= '9' && \
str[i + 1] <= 'Z' && str[i + 1] >= 'A')
		str[i + 1] = str[i + 1]	+ 32;
	if (str[i] >= '!' && str[i] <= ':' && \
str[i + 1] <= '@' && str[i + 1] >= 'a')
		str[i + 1] = str[i + 1] - 32;
}

int ltr(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z' \
&& str[i + 1] <= 'Z' && str[i + 1] >= 'A')
		str[i + 1] = str[i + 1] + 32;
}

int spe(char *str, int i)
{
	if (str[i] >= '[' && str[i] <= '`' \
&& str[i + 1] <= 'z' && str[i + 1] >= 'a')
		str[i + 1] = str[i + 1] - 32;
	if (str[i] >= '{' && str[i] <= '~' \
&& str[i + 1] <= 'z' && str[i + 1] >= 'a')
		str[i +	1] = str[i + 1] - 32;
}

char *my_strcapitalize(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		if (str[0] <= 'z' && str[0] >= 'a')
			str[0] = str[0] - 32;
		ltr(str, i);
		nbr(str, i);
		spe(str, i);
		spc(str, i);
		i++;
	}
	if (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
		str[i - 1] = str[i - 1] + 32;
	return (str);
}
