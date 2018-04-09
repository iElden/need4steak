/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
** Display if n is neg or pos
*/

#include "my.h"

int my_isneg(int n)
{
	if (n >= 0) {
		my_putchar('P');
	} else {
		my_putchar('N');
	}
}
