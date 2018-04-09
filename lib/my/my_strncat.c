/*
** EPITECH PROJECT, 2017
** my_strncat.c
** File description:
** Function that concatenates n characters of the src string.
*/

char *my_strncat(char *dest, char const *src, int nb)
{
	int counter = 0;
	int counter2 = 0;

	while (dest[counter] != '\0') {
		counter++;
	}
	while (src[counter2] < nb && src[counter2] != '\0') {
		dest[counter] = src[counter2];
		counter++;
		counter2++;
	}
	dest[counter] = '\0';
	return (dest);
}
