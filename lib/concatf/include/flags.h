/*
** EPITECH PROJECT, 2017
** flags
** File description:
** all flags for my_printf
*/

#ifndef __FLAGS_H_
#define __FLAGS_H_

#include "concatf.h"
#define ALTERNATE_FORM	1
#define PAD_WITH_ZERO	2
#define PAD_LEFT	3
#define PAD_WITH_SPACES	4
#define	SHOW_SIGN	5

flags   all_flags[] = {
	{'f', 1, (void *)&concatstarfloat},
	{'d', 0, (void *)&concatstarint},
	{'i', 0, (void *)&concatstarint},
	{'u', 0, (void *)&concatnbr_unsigned},
	{'c', 0, (void *)&concatstarchar},
	{'s', 2, (void *)&put_str},
	{'o', 0, (void *)&concatoctal},
	{'%', '%', (void *)&concatstarchar},
	{'S', 2, (void *)&show_str},
	{'b', 0, (void *)&concatbinary},
	{'p', 2, (void *)&concatpointer},
	{'x', 0, (void *)&concathexa},
	{'X', 0, (void *)&concathexa_cap},
	{0, 0, 0}
};

flags	format_flag[] = {
	{'#', ALTERNATE_FORM, 0},
	{'0', PAD_WITH_ZERO, 0},
	{'-', PAD_LEFT, 0},
	{' ', PAD_WITH_SPACES, 0},
	{'+', SHOW_SIGN, 0},
	{0, 0, 0}
};

#endif
