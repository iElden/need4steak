/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** Fonction that copies n characters from a string from a string into another.
*/

char *my_strncpy(char *dest, char const *src, int n)
{
	int i = 0;
	while (n > i) {
		dest[i] = src[i];
		i++;
	}
	if (n > sizeof(src))
		dest[i] = '\0';
	return (dest);
}
