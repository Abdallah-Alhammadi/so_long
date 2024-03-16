/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:14:06 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 14:14:07 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] && str[i] != c)
			i++;
		if (str[i] == c)
			return (0);
	}
	return (1);
}

int	ft_wallcheck(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] && !(str[i] >= 50 && str[i] <= 126))
			i++;
		if (str[i] == (str[i] >= 50 && str[i] <= 126))
			return (0);
	}
	return (1);
}
