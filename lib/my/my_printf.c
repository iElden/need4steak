/*
** EPITECH PROJECT, 2017
** my_printf.c
** File description:
** Display like printf function!
*/

#include <stdarg.h>
#include "my.h"
#include "my_printf.h"

int take_size(char *s)
{
	int counter = 0;

	for (int i = 0; s[i]; i++) {
		if (s[i] == '%' && s[i - 1] != '%')
			counter++;
	}
	return (counter);
}

int function_gestion(va_list arg, char *s, int counter)
{
	int error = 0;

	for (int i = 0; 0 < 9; i++) {
		error = is_redirected(arg, i, s, counter + 1);
		if (error == 1 || error == 2)
			break;
		if (error == 84)
			return (84);
	}
	return (error);
}

int takes_error(char *s, int counter)
{
	my_putchar(s[counter]);
	my_putchar(s[counter + 1]);
	return (0);
}

int  my_printf(char *s, ...)
{
	va_list arg;
	int nb = take_size(s);
	int error = 0;
	int s_size = my_strlen(s);

	va_start(arg, s);
	for (int counter = 0; counter < s_size; counter++) {
		if (s[counter] == '%')
			error = function_gestion(arg, s, counter);
		if (error == 84) {
			error = takes_error(s, counter);
			counter++;
		}
		else if (s[counter] != '%' && s[counter - 1] != '%') {
			my_putchar(s[counter]);
			error == 0;
		}
	}
	va_end(arg);
	return (0);
}
