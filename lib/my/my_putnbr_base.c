/*
** EPITECH PROJECT, 2017
** my_putnbr_base.c
** File description:
** Function that put a number with anything base.
*/

#include "../include/my.h"

void calc_nbrbase(int nbr, char const *base)
{
	int base_size;

	base_size = my_strlen(base);
	my_putnbr_base(nbr / base_size, base);
	my_putchar(base[nbr % base_size]);
}

int my_putnbr_base(int nbr, char const *base)
{
	if (nbr < 0) {
		my_putchar('-');
		nbr = -nbr;
	}
	if (nbr == 0)
		return (0);
	else
		calc_nbrbase(nbr, base);
}
