/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** A function that swaps the content of two integers.
*/

int my_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
