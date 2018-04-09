/*
** EPITECH PROJECT, 2017
** my_find_prime_sup.c
** File description:
** Fonction that returns the smallest prime number.
*/

int give2(int x, int nb)
{
	while (x * x <= nb) {
		if (nb % x == 0)
			nb++;
		x = x + 2;
	}
}

int my_find_prime_sup(int nb)
{
	int x = 3;

	if (nb < 2)
		return (3);
	else if (nb == 2)
		return (nb);
	if (nb % 2 == 0)
		nb++;
	give2(x, nb);
	return (nb);
}
