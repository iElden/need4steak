/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** header for my lib
*/

#ifndef __MY_PRINTF_H_
#define __MY_PRINTF_H_ 1

#include <stdbool.h>
#define READ_SIZE 50

int	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
long	my_compute_power_rec_long(long nb, int power);
int	my_showstr(char const *str);
int	my_putnbr_base_long(long number, char const *base, int draw);
void	show_address(char *address);
void	showmem_chars(char const *str, int size, int *sizes);
int	showmem_values(char const *str, int size, int buffer);
int	my_putnbr_base(unsigned int nbr, char const *base);
int	my_putchar_stderr(char c);
int	my_putstr_stderr(char const *str);
int	my_putfloat(double nbr, int decimals);
int	my_put_nbr_unsigned(unsigned int nb);
int	my_printf(char *str, ...);
int	my_putstarfloat(double *nbr);
int	my_putstarint(int *nbr);
int	my_putstarchar(char *nbr);
int	my_putnbr_unsigned(unsigned int *nbr);
int	my_put_str(char *str);
int	my_put_str_stderr(char *str);
int	my_show_str(char *str);
int	my_putoctal(int *nbr);
int	my_putbinary(int *nbr);
int	my_puthexa(int *nbr);
int	my_puthexa_cap(int *nbr);
int	my_putpointer(void *ptr);

struct flags_s {
	char	flag;
	int	type;
	int	(*fct)(void *);
};
typedef struct flags_s flags;

#endif
