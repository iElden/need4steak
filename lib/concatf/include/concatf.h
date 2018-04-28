/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** header for my lib
*/

#ifndef __MY_H_
#define __MY_H_ 1

#include <stdbool.h>
#include <stdarg.h>

char	*concatf(char *str, ...);
int	get_nbrlen(int nbr);
char	*concat(char *str1, char *str2, bool free1, bool free2);
char	*put_str(char *str);
char	*show_str(char *str);
char	*showstr(char const *str);
char    *uint_to_str(unsigned int nb);
char    *int_to_str(int nb);
char	*sub_strings(char const *str, int start, int end, char *buffer);
char	*concatstarfloat(double *nbr, int format, int format_size);
char	*concatstarint(int *nbr, int format, int format_size);
char	*concatstarchar(char *c);
char	*concatpointer(void *ptr, int format, int format_size);
char	*concatnbr_unsigned(unsigned int *nbr, int format, int format_size);
char	*concathexa(int *nbr);
char	*concathexa_cap(int *nbr);
char	*concatoctal(int *nbr);
char	*concatbinary(int *nbr);
int	my_compute_power_rec_long(int, int);
char	*my_putnbrbase(unsigned int, char const *);
char	*float_to_str(double nbr, int decimals);
int	my_pow(int nbr, int n);
int	my_strlen(char const *str);
char	*my_strdup(char const *str);

typedef struct {
	char	flag;
	int	type;
	char	*(*fct)(void *);
} flags;

#endif
