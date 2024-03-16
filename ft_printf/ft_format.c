/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:49:14 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 13:49:15 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char current)
{
	int	result;

	result = 0;
	if (current == 'd' || current == 'i')
		result += ft_putnbr(va_arg(args, int));
	else if (current == 'u')
		result += ft_printunsigned(va_arg(args, unsigned int));
	else if (current == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (current == 's')
		result += ft_putstr(va_arg(args, char *));
	else if (current == 'p')
		result += ft_pointer(current, va_arg(args, unsigned long long));
	else if (current == 'x' || current == 'X')
		result += ft_printhex(current, va_arg(args, unsigned int));
	else if (current == '%')
		result += ft_putchar('%');
	else
		result += ft_putchar(current);
	return (result);
}
