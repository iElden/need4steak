/*
** EPITECH PROJECT, 2017
** concat_params.c
** File description:
** Function that turns ther command-line given arguments into a single string.
*/

#include <stdlib.h>

char *my_strcat1(char **src, int nbarg, char *dest)
{
	int counter = 0;
	int c2 = 0;
	int x = 0;

	while (nbarg > x) {
		dest[counter] = src[x][c2];
		counter++;
		c2++;
		if (src[x][c2] == '\0') {
			dest[counter] = '\n';
			x++;
			counter++;
			c2 = 0;
		}
	}
	dest[counter - 1] = '\0';
	return (dest);
}

char *concat_params(int argc, char **argv)
{
	char *dest;
	int counter = 0;
	int nbrchara = 0;

	while (argc > counter) {
		nbrchara = nbrchara +  my_strlen(argv[counter] + 1);
		counter++;
	}
	dest = malloc(sizeof(char) * (nbrchara + 1));
	dest = my_strcat1(argv, argc, dest);
	return (dest);
}
