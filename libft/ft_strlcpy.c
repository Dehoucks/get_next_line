/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:32:46 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/08 14:59:48 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *source, size_t length)
{
	size_t	i;

	i = 0;
	while (source[i] && i < length)
	{
		dest[i] = source[i];
		i++;
	}
	if (i < length)
		dest[i] = 0;
	else
		dest[i - 1] = 0;
	return (ft_strlen(source));
}
