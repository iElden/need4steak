/*
** EPITECH PROJECT, 2017
** my_compute_power_rec.c
** File description:
** The same like my_compute_power_it but with a recursive fonction.
*/

int comp4(float result)
{
	if (result <= 2147483648 || result >= -2147483648)
		return (result);
	else
		return (0);
}

int my_compute_power_rec(int nb, int p)
{
	float result;

	if (p > 1) {
		result = my_compute_power_rec(nb, p - 1);
		comp4(result);
	} else if (p == 0)
		return (1);
	if (nb < 0)
		return (0);
}
