/*
** EPITECH PROJECT, 2017
** my_compute_square_root.c
** File description:
** Fonction that returns the square root.
*/

int my_compute_square_root(int nb)
{
	int result = 0;
	int x = 0;

	while (nb > result) {
		result = x * x;
		x++;
	}
	if (result == nb)
		return (x);
	else if (result != nb)
		return (0);
}
