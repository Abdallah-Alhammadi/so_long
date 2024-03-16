/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:50:19 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 13:50:20 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	exit_game(t_solong *vars)
{
	mlx_destroy_window(vars->mlx, vars->window);
	exit(0);
	return (0);
}

int	check_exit_r(t_solong *vars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (vars->map[i] != NULL)
	{
		j = 0;
		while (vars->map[i][j])
		{
			if (vars->map[i][j] == 'P' && vars->map[i][j + 1] == 'E')
				return (exit_game(vars), 1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_exit_l(t_solong *vars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (vars->map[i] != NULL)
	{
		j = 0;
		while (vars->map[i][j])
		{
			if (vars->map[i][j] == 'P' && vars->map[i][j - 1] == 'E')
				return (exit_game(vars), 1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_exit_up(t_solong *vars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (vars->map[i] != NULL)
	{
		j = 0;
		while (vars->map[i][j])
		{
			if (vars->map[i][j] == 'P' && vars->map[i - 1][j] == 'E')
				return (exit_game(vars), 1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_exit_d(t_solong *vars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (vars->map[i] != NULL)
	{
		j = 0;
		while (vars->map[i][j])
		{
			if (vars->map[i][j] == 'P' && vars->map[i + 1][j] == 'E')
				return (exit_game(vars), 1);
			j++;
		}
		i++;
	}
	return (0);
}
