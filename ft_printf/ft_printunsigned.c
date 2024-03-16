/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:49:43 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 13:49:44 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	int	res;

	res = 0;
	if (n < 10)
	{
		res += ft_putchar(n + '0');
		return (res);
	}
	res += ft_printunsigned(n / 10);
	res += ft_printunsigned(n % 10);
	return (res);
}
