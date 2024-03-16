/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:49:27 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 13:49:29 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		result;
	int		i;
	va_list	args;

	va_start(args, input);
	i = 0;
	result = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '%' && input[i + 1])
			result += ft_format(args, input[++i]);
		else
			result += ft_putchar(input[i]);
		i++;
	}
	va_end(args);
	return (result);
}
