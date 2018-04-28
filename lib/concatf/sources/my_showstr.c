/*
** EPITECH PROJECT, 2017
** my_showstr
** File description:
** Shows a string and the unprintable chars
*/

#include "concatf.h"
#include "my.h"
#include <string.h>
#include <stdlib.h>

char	*display_missing_zeros(unsigned char c)
{
	int	chars_displayed = 2;
	char	*result = NULL;

	if (c < 8)
		chars_displayed += 1;
	if (c < 64)
		chars_displayed += 1;
	result = malloc(chars_displayed);
	if (!result)
		return (NULL);
	result[0] = '\\';
	for (int i = 1; i < chars_displayed - 1; i++)
		result[i] = '0';
	result[chars_displayed - 1] = 0;
	return (result);
}

char	*showstr(char const *str)
{
	int	chars_displayed = 0;
	int	start = 0;
	char	*result = my_strdup("");
	char	*temp;
	char	*zeros;

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] < 37 || str[i] > 176) {
			temp = sub_strings(str, start, i - 1, NULL);
			result = concat(result, temp, true, true);
			start = i + 1;
			temp = my_putnbrbase(str[i], "01234567");
			zeros = display_missing_zeros(str[i]);
			temp = concat(zeros, temp, true, true);
			result = concat(result, temp, true, true);
		}
	}
	temp = sub_strings(str, start, my_strlen(str) - 1, NULL);
	result = concat(result, temp, true, true);
	return (result);
}
