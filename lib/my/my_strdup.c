/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** Function that allocates memory and copies the string given as argument in it
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
	int counter = 0;
	char *s;

	s = malloc(sizeof(char) * (my_strlen(src) + 1));
	while (src[counter] != '\0') {
		s[counter] = src[counter];
		counter++;
	}
	return (s);
}
