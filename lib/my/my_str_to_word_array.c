/*
** EPITECH PROJECT, 2017
** my_str_to_word_array.c
** File description:
** Function that splits a string into words. 
*/

#include <stdlib.h>

int nbrstring(char const *str)
{
	int counter = 0;
	int counter2 = 2;

	while (str[counter2] != '\0') {
		if (str[counter2] >= '0' && str[counter2] <= '9'||\
str[counter2] <= 'Z' && str[counter2] >= 'A' ||	 str[counter2] <= 'z'\
&& str[counter2] >= 'a') {
		} else
			counter++;
		counter2++;
	}
	return (counter + 1);
}

int nbrchar(char const *str, int counter2)
{
	int del;

	del = counter2;
	while (str[counter2] >= '0' && str[counter2] <= '9'||\
str[counter2] <= 'Z' && str[counter2] >= 'A' || str[counter2]\
<= 'z' && str[counter2] >= 'a') {
		counter2++;
		if (str[counter2] == '\0')
			break;
	}
	counter2 = (counter2 + 1) - del;
	return (counter2);
}

char *is_malloc(char const *str, int counter, int counter2)
{
	char **dest;

	dest[counter] = malloc(sizeof(char) * \
(nbrchar(str, counter2) + 1));
	return (dest[counter]);
}

char **my_str_to_word_array(char const *str)
{
	int counter = 0;
	int counter2 = 0;
	int x = 0;
	char **dest;

	dest = malloc(sizeof(*dest) * (nbrstring(str) + 1));
	for (int counter2 = 0; str[counter2] != '\0'; counter2++) {
		dest[counter] = is_malloc(str, counter, counter2);
		if (str[counter2] >= '0' && str[counter2] <= '9'|| str[counter2\
] <= 'Z' && str[counter2] >= 'A' || str[counter2] <= 'z' && \
str[counter2] >= 'a') {
			dest[counter][x] = str[counter2];
			x++;
		} else {
			dest[counter][x] = '\0';
			counter++;
			x = 0;
		}
	}
	return (dest);
}
