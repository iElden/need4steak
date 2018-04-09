/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** Print a number.
*/

#include "my.h"

void calc(int nb)
{
	if (nb >= 10) {
		calc(nb / 10);
	}
	if (nb > 0) {
		my_putchar((nb % 10) + 48);
	}
}

int my_put_nbr(int nb)
{
	if (nb == 0) {
		my_putchar('0');
		return (0);
	}
	if (nb < 0) {
		my_putchar('-');
		nb = -nb;
	}
	calc(nb);
	return (0);
}
