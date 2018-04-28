/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** Main function of n4s.
*/

#include "functions.h"
#include <stdlib.h>

int main(void)
{
	exec_command("start_simulation\n", false);
	ai();
	exec_command("stop_simulation\n", false);
	return (EXIT_SUCCESS);
}
