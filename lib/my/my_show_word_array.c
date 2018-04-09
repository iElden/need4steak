/*
** EPITECH PROJECT, 2017
** my_show_word_array.c
** File description:
** Function that display the content of an array of word.
*/

#include "my.h"
#include <stdlib.h>

int my_show_word_array(char **test_word_array)
{
	int nbrchar = 0;
	int counter = 0;

	while (test_word_array[counter]) {
		nbrchar =  nbrchar+ my_putstr(test_word_array[counter]);
		my_putchar('\n');
		counter++;
	}
	return (0);
}
