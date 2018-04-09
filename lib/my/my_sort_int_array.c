/*
** EPITECH PROJECT, 2017
** my_sort_int_array.c
** File description:
** Fonction that sorts an integer array in ascending order, given a pointer.
*/

void my_sort_int_array(int *array, int size)
{
	int nb = 0;
	int y;
	int x = 0;

	while (nb < size) {
		if (array[nb] >= array[x]) {
			y = array[nb];
			array[nb] = array[x];
			array[x] = y;
		}
		nb ++;
		if (nb >= size) {
			x  ++;
			nb = x;
		}
	}
}
