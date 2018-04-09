/*
** EPITECH PROJECT, 2017
** my_is_prime.c
** File description:
** Function that returns 1 to primes number, 0 if not.
*/

int give(int x, int nb)
{
	while (x * x <= nb) {
		if (nb % x == 0)
			return (0);
		x = x + 2;
	}
}

int my_is_prime(int nb)
{
	int x = 3;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	else {
		give(x, nb);
		return (1);
	}
}
