/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** A function that displays, one-by-one, the characters of a string.
*/

#include "my.h"

int my_putstr(char const *str)
{
	int n = 0;

	while (str[n] != '\0') {
		my_putchar(str[n]);
		n += 1;
	}
}
