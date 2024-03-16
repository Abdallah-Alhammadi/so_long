/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:49:20 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 13:49:21 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(char current, unsigned long long c)
{
	int	result;

	result = 0;
	result += ft_putstr("0x");
	result += ft_printhex(current, c);
	return (result);
}
