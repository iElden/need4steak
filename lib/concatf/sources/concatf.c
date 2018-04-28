/*
** EPITECH PROJECT, 2017
** concatf
** File description:
** Like printf but concats instead of printing
*/

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "concatf.h"
#include "flags.h"

char	*concat_arg(va_list args, int i)
{
	double	nbrd;
	int	nbri;
	char	*test;

	switch (all_flags[i].type) {
	case 0:
		nbri = va_arg(args, int);
		return (all_flags[i].fct(&nbri));
	case 1:
		nbrd = va_arg(args, double);
		return (all_flags[i].fct(&nbrd));
	case 2:
		test = va_arg(args, char *);
		return (all_flags[i].fct(test));
	default:
		nbri = all_flags[i].type;
		return (all_flags[i].fct(&nbri));
	}
}

char	*find_flag(char *str, va_list args_list)
{
	char	*temp = NULL;

	for (int i = 0; all_flags[i].flag != 0; i++) {
		if (all_flags[i].flag == *str)
			return (concat_arg(args_list, i));
	}
	temp = malloc(3);
	if (!temp)
		return (NULL);
	temp[0] = '%';
	temp[1] = *str;
	temp[2] = 0;
	return (temp);
}

char	*concatf(char *str, ...)
{
	va_list	args_list;
	char	*result = my_strdup("");
	void	*args = NULL;
	int	start = 0;
	char	*temp;

	va_start(args_list, str);
	for (int i = 0; str[i] != 0; i++)
		if (str[i] == '%') {
			temp = sub_strings(str, start, i - 1, NULL);
			result = concat(result, temp, true, true);
			i++;
			temp = find_flag(&str[i], args_list);
			result = concat(result, temp, true, true);
			start = i + 1;
		}
	temp = sub_strings(str, start, my_strlen(str), NULL);
	result = concat(result, temp, true, true);
	va_end(args_list);
	return (result);
}
