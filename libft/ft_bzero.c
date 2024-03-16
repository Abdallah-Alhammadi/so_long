/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:11:41 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 14:11:42 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	char	*tmp;

	i = 0;
	tmp = (char *)s;
	while (i < (int)n)
	{
		tmp[i] = 0;
		i++;
	}
}