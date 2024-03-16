/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abalhamm <abalhamm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:11:12 by abalhamm          #+#    #+#             */
/*   Updated: 2023/07/26 14:11:12 by abalhamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 13
# endif

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include ".././libft/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char *left_str, char *buff);

size_t	ft_strlen(char const *s);

int		ft_strchr(char *str, int c);

void	*ft_calloc(size_t count, size_t size);

void	ft_bzero(void *s, size_t n);

char	*get_next_line(int fd);
#endif