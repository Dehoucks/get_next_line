/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 12:52:39 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/10 13:01:18 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *source, int c)
{
	int		i;
	char	*located;

	located = (char *) source;
	i = ft_strlen(source);
	while (i >= 0)
	{
		if (located[i] == c)
			return (&located[i]);
		i--;
	}
	return (NULL);
}
/*
int	main()
{
	char *test = "bonjour";
	printf("moi :%s", ft_strrchr(test, 't'));
	printf("\ntst :%s", strrchr(test, 't'));
}*/