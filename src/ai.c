/*
** EPITECH PROJECT, 2018
** ai
** File description:
** algorithm of n4s
*/

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"
#include "functions.h"
#include "macros.h"
#include "concatf.h"
#include <math.h>

double	change_speed(double *lidar)
{
	char	*cmd;
	double	speed = 0;

	for (int i = 13; i < 19; i++)
		speed += lidar[i];
	if (speed == 0)
		return (0);
	speed /= 6;
	if (speed < 0 || speed > 1000)
		speed = (speed < 0 ? 0 : 1000);
	cmd = concatf("CAR_FORWARD:%f\n", speed / 2600);
	exec_command(cmd, false);
	free(cmd);
	return (speed);
}

void	set_angle(double angle)
{
	char	*cmd;

	if (angle < 0)
		cmd = concatf("WHEELs_DIR:-%f\n", -angle);
	else
		cmd = concatf("WHEELs_DIR:%f\n", angle);
	exec_command(cmd, false);
	free(cmd);
}

void	update_car(double *car_lidar, int speed)
{
	double	left = 0;
	double	right = 0;
	double	angle = 0;

	if (car_lidar[0] <= 100 || car_lidar[30] <= 100)
		exit(EPITECH_FAILURE);
	for (int i = 0; i < 5; i++)
		left += car_lidar[i];
	left /= 5;
	for (int i = 27; i < 32; i++)
		right += car_lidar[i];
	right /= 5;
	angle = (left - right) * 3.14 / 180 / 64 * (-5.5 * speed / 1000 + 6) * \
	(speed < 100 ? 10 : 1);
	if (angle < (speed < 100 ? -1 : -0.25) || \
angle > (speed < 100 ? 1 : 0.25))
		angle = (angle > (speed < 100 ? 1 : 0.25) ? \
		(speed < 100 ? 1 : 0.25) : (speed < 100 ? -1 : -0.25));
	set_angle(angle);
}

double	*get_lidar(void)
{
	char	*result = exec_command("get_info_lidar\n", true);
	char	**pts = split(result, ':');
	double	*points = malloc(32 * sizeof(*points));

	if (pts[35] == NULL ||)
		exit(EPITECH_FAILURE);
	if (!points || !pts || !result || strcmp(result, "") == 0) {
		if (pts)
			free(pts[0]);
		free(pts);
		free(points);
		free(result);
		return (NULL);
	}
	for (int i = 0; i < 32; i++)
		points[i] = atof(pts[i + 3]);
	free(pts[0]);
	free(pts);
	free(result);
	return (points);
}

void	ai(void)
{
	bool	quit = false;
	car_t	car;

	while (!quit) {
		car.lidar = get_lidar();
		if (car.lidar == NULL)
			exit(EPITECH_FAILURE);
		car.speed = change_speed(car.lidar);
		update_car(car.lidar, car.speed);
		quit = (car.speed == 0);
		free(car.lidar);
	}
}
