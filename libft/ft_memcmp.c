/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:12:43 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 14:12:44 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	size_t			i;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	while (n)
	{
		if (b1[i] != b2[i])
			return (b1[i] - b2[i]);
		i++;
		n--;
	}
	return (0);
}
// int main()
// {
// 	char s1[]="mhammed";
// 	char s2[]="mohammed";

// 	printf("%d", ft_memcmp(s1,s2,5));
// 	return (0);
// }