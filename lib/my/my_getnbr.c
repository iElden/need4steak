/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** Returns a number, sent to the fonction as a string.
*/

int my_getnbr(char const *str)
{
	int i = 0;
	int nb = 0;
	int xy = 0;

	if (str[i] == '-') {
		xy = 1;
		i = 1;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9') {
		nb = (nb + (str[i] - '0')) * 10;
		i ++;
	}
	if (xy == 1) {
		nb = -1 * nb;
	} else
		nb = nb;
	if (i > 2147483648 || i < -2147483648)
		nb = 0;
	return (nb/10);
}
