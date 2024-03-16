/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:49:39 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 13:49:40 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(char current, unsigned long long c)
{
	int	result;

	result = 1;
	if (c >= 16)
		result += ft_printhex(current, c / 16);
	c %= 16;
	if (current == 'X')
		write(1, &"0123456789ABCDEF"[c], 1);
	else
		write(1, &"0123456789abcdef"[c], 1);
	return (result);
}
