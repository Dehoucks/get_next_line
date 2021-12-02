/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:16:23 by robindehouc       #+#    #+#             */
/*   Updated: 2021/12/02 12:40:15 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* 	ft_removeline(char* stocker);
char* 	get_next_line(const int fd);
char*	ft_getline(char* source, char* line);
char	*ft_strjoin(char *left_str, char *buff);
size_t	ft_strlen(const char *str);
char	*ft_strchr(char *s, int c);

#endif