/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <marvin@42quebec.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:21:39 by fleduc            #+#    #+#             */
/*   Updated: 2022/04/27 17:58:16 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <unistd.h>
# include <stdlib.h>

int		ft_sl(char *str);
int		ft_check_eof(char *buffer);

char	*get_next_line(int fd);
char	*ft_get_the_line(char *line, char *buffer);

void	ft_bzero(void *s, size_t n);
void	ft_clean_buffer(char *buffer);
void	*ft_calloc(size_t count, size_t size);

#endif
