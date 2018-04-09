/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** display a string
*/

#include "my.h"
#include <unistd.h>

int	my_putstr_stderr(char const *str)
{
	return (write(2, str, my_strlen(str)));
}
