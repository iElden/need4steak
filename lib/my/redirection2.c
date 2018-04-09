/*
** EPITECH PROJECT, 2017
** redirection2.c
** File description:
** 2nd part of redirection.c file
*/

#include <stdarg.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include "my.h"
#include "my_printf.h"

int is_ptr(va_list print, char *s, int i)
{
	if (s[i] == 'p') {
		my_putstr("0x");
		my_putnbr_base((long)va_arg(print, void*), "0123456789abcdef");
		return (1);
	}
	return (0);
}

int is_binary(va_list print, char *s, int i)
{
	if (s[i] == 'b') {
		my_putnbr_base(va_arg(print, int), "01");
		return (1);
	}
	return (0);
}

int is_pourcent(va_list print, char *s, int i)
{
	if (s[i] == '%') {
		my_putchar('%');
		return (2);
	} else
		return (84);
}
