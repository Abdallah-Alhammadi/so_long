/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:12:19 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 14:12:19 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	absolute_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	get_len(int nbr)
{
	int	length;

	length = 0;
	if (nbr <= 0)
		++length;
	while (nbr != 0)
	{
		++length;
		nbr = nbr / 10;
	}
	return (length);
}

char	*ft_itoa(int nbr)
{
	int		length;
	char	*result;

	length = get_len(nbr);
	result = malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	result[length] = '\0';
	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		length--;
		result[length] = absolute_value(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (result);
}
