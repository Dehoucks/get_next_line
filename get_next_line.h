/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:16:23 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/28 22:24:42 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 100

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* 	ft_removeline(char* stocker);
int 	get_next_line(const int fd, char **line);
char*	ft_getline(char *line, char* source);
# include "libft/libft.h"
size_t	ft_strlen(const char *str);
char	*ft_strsub(char const *s, unsigned int start, size_t len);


#endif