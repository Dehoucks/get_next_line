/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 14:27:07 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/18 14:54:45 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *source, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (((char *) source)[i] && i < n)
	{
		if (((unsigned char *) source)[i] == (unsigned char) c)
			return ((char *)&source[i]);
		i++;
	}
	if (((char *) source)[i] == 0 && c == 0)
		return ((char *)&source[i]);
	return (NULL);
}
/*
int	main()
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
	printf("%s\n", (char *) memchr(tab, -1, 7));
}*/