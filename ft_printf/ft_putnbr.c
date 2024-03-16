/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:49:53 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 13:49:53 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	res;

	res = 0;
	if (n == -2147483648)
	{
		res += ft_putstr("-2147483648");
		return (res);
	}
	if (n < 0)
	{
		res += ft_putchar('-');
		n *= -1;
	}
	if (n < 10 && n >= 0)
	{
		res += ft_putchar(n + '0');
		return (res);
	}
	res += ft_putnbr(n / 10);
	res += ft_putnbr(n % 10);
	return (res);
}
