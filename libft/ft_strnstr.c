/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 16:25:42 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/10 16:54:19 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	size_t	counter;

	size = ft_strlen(needle);
	i = 0;
	j = 0;
	if (size == 0)
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		counter = 0;
		while (needle[j] == haystack[i] && i < len)
		{
			counter++;
			if (counter == size)
				return (&((char *)haystack)[i - j]);
			i++;
			j++;
		}
		if (counter == 0)
			i++;
	}
	return (NULL);
}
/*
int	main()
{
	char * test = "Bonjour";
	char * test2 = "on";

	printf("%s", ft_strnstr(test, test2, 50));
}*/