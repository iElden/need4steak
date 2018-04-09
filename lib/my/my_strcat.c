/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** Function that concatenates two strings.
*/

char *my_strcat(char *dest, char const *src)
{
	int counter = 0;
	int counter2 = 0;

	while (dest[counter] != '\0') {
		counter++;
	}
	while (src[counter2] != '\0') {
		dest[counter] = src[counter2];
		counter++;
		counter2++;
	}
	dest[counter] = '\0';
	return (dest);
}
