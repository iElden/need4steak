/*
** EPITECH PROJECT, 2017
** my_putbase
** File description:
** All function which displays in a specific base
*/

#include "concatf.h"

char	*concathexa(int *nbr)
{
	return (my_putnbrbase(*nbr, "0123456789abcdef"));
}

char	*concathexa_cap(int *nbr)
{
	return (my_putnbrbase(*nbr, "0123456789ABCDEF"));
}

char	*concatoctal(int *nbr)
{
	return (my_putnbrbase(*nbr, "01234567"));
}

char	*concatbinary(int *nbr)
{
	return (my_putnbrbase(*nbr, "01"));
}
