/*
** EPITECH PROJECT, 2017
** is_unprintable.c
** File description:
** Function that print the unprintable characters.
*/

#include <stdarg.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "my.h"
#include "my_printf.h"

void is_unprintable2(int i2, char *s_print, int sf_print)
{
	if (s_print[i2] < 32 || s_print[i2] >= 127) {
		my_putchar(92);
		if (s_print[i2] < 8 && s_print[i2] > 0)
			my_putstr("00");
		else if (s_print[i2] < 64)
			my_putchar('0');
		sf_print = s_print[i2];
		my_putnbr_base(sf_print, "01234567");
	} else
		my_putchar(s_print[i2]);
}

int is_unprintable(va_list print, char *s, int i1)
{
	int size;
	char *s_print;
	int sf_print = 0;

	if (s[i1] == 'S') {
		s_print = va_arg(print, char*);
		size = my_strlen(s_print);
		for (int i2 = 0; i2 < size; i2++) {
			is_unprintable2(i2, s_print, sf_print);
		}
		return (1);
	}
	return (0);
}
