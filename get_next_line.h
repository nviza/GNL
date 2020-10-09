/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nviza-eu <nviza-eu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 18:39:30 by nviza-eu          #+#    #+#             */
/*   Updated: 2020/10/09 18:47:43 by nviza-eu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 32
#endif

void			ft_bzero(void *s, size_t n);
static void		ft_strdel(char **str)
size_t			ft_strlen(const char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strchr(const char *s, int c)
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strdup(const char *s);
int				get_next_line(const int fd, char **line);

#endif