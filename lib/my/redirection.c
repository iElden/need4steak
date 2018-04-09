/*
** EPITECH PROJECT, 2017
** redirection.c
** File description:
** Function that redirect with a pointer on function.
*/

#include <stdarg.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "my.h"
#include "my_printf.h"

int is_str(va_list print, char *s, int i)
{
	if (s[i] == 's') {
		my_putstr(va_arg(print, char*));
		return (1);
	}
	return (0);
}

int is_char(va_list print, char *s, int i)
{
	if (s[i] == 'c') {
		my_putchar(va_arg(print, int));
		return (1);
	}
	return (0);
}

int is_unsigned_int(va_list print, char *s, int i)
{
	if (s[i] == 'x') {
		my_putnbr_base(va_arg(print, int), "0123456789abcdef");
		return (1);
	}
	if (s[i] == 'X') {
		my_putnbr_base(va_arg(print, int), "0123456789ABCDEF");
		return (1);
	}
	if (s[i] == 'o') {
		my_putnbr_base(va_arg(print, int), "01234567");
		return (1);
	}
	if (s[i] == 'u') {
		my_putnbr_base(va_arg(print, int), "0123456789");
		return (1);
	}
	return (0);
}

int is_int(va_list print, char *s, int i)
{
	if (s[i] == 'i' || s[i] == 'd') {
		my_put_nbr(va_arg(print, int));
		return (1);
	}
	return (0);
}

int is_redirected(va_list print, int direction, char *s, int counter)
{
	int error = 0;

	int (*all_redirection[9])(va_list, char *, int) = {is_int, \
is_str, is_char, is_unsigned_int, is_unprintable, is_ptr, is_binary, \
is_pourcent};
	error = all_redirection[direction](print, s, counter);
	return (error);
}
