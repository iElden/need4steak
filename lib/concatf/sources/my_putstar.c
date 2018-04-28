/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** displays
*/

#include "concatf.h"
#include <stdbool.h>
#include <stdlib.h>

char	*concatstarfloat(double *nbr, int format, int format_size)
{
	return (float_to_str(*nbr, 6));
}

char	*concatstarint(int *nbr, int format, int format_size)
{
	return (int_to_str(*nbr));
}

char	*concatstarchar(char *c)
{
	char	*result = malloc(2);

	result[0] = *c;
	result[1] = 0;
	return (result);
}

char	*concatpointer(void *ptr, int format, int format_size)
{
	char	*nbr = my_putnbrbase((long)ptr, "0123456789abcdef");

	return (concat("0x", nbr, false, true));
}

char	*concatnbr_unsigned(unsigned int *nbr, int format, int format_size)
{
	return (uint_to_str(*nbr));
}
