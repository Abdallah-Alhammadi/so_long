/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:11:45 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 14:11:45 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*x;

	if (size != 0 && count >= SIZE_MAX / size)
		return (NULL);
	x = malloc(count * size);
	if (!x)
		return (NULL);
	ft_bzero (x, (size * count));
	return (x);
}
