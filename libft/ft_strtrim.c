/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:57:47 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/18 13:57:52 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_suffix(const char *source, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = ft_strlen(source) - 1;
	j = 0;
	while (set[j])
	{
		count = 0;
		if (set[j] == source[i])
		{
			i--;
			count++;
			j = 0;
		}
		if (count == 0)
			j++;
	}
	return (i);
}

int	ft_prefix(const char *source, char const *set)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	while (set[j])
	{
		count = 0;
		if (set[j] == source[i])
		{
			i++;
			count++;
			j = 0;
		}
		if (count == 0)
			j++;
	}
	return (i);
}

char	*ft_strtrim(char const *source, char const *set)
{
	char	*trimmed;
	int		start;
	int		end;
	int		i;

	if (!source)
		return (NULL);
	i = 0;
	trimmed = malloc(sizeof(char) * ft_strlen(source) + 1);
	if (trimmed == NULL)
		return (NULL);
	start = ft_prefix(source, set);
	end = ft_suffix(source, set);
	while (start <= end)
	{
		trimmed[i] = source[start];
		i++;
		start++;
	}
	trimmed[i] = 0;
	return (trimmed);
}

/*
{
int	main()
	printf("%s", ft_strtrim("boninn", "bon"));
}
*/