/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdehouck <rdehouck@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 11:54:22 by rdehouck          #+#    #+#             */
/*   Updated: 2021/11/18 13:55:12 by rdehouck         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nblength(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_convert(char *cnumber, int nb, int length, int *int_array)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (nb < 0)
	{
		cnumber[j] = '-';
		j++;
	}
	while (i < length)
	{		
		cnumber[j] = int_array[i] + '0';
		j++;
		i++;
	}
	cnumber[j] = '\0';
	return (cnumber);
}

int	*int_table(int nb, int length)
{
	int	*int_array;

	int_array = malloc(sizeof(int) * length + 1);
	if (int_array == NULL)
		return (NULL);
	if (nb < 0)
	{
		nb = nb * -1;
	}	
	while (nb != 0)
	{
		int_array[length] = nb % 10;
		length--;
		nb /= 10;
	}
	return (int_array);
}

char	*ft_itoa(int nb)
{
	int		length;
	char	*cnumber;
	int		*int_array;

	int_array = int_table(nb, ft_nblength(nb) - 1);
	length = ft_nblength(nb) + 1;
	if (nb < 0)
		length = length + 1;
	cnumber = malloc(sizeof(char) * length);
	if (cnumber == NULL)
		return (NULL);
	if (nb == -2147483648)
	{
		ft_strlcpy(cnumber, "-2147483648", 12);
		return (cnumber);
	}
	cnumber = ft_convert(cnumber, nb, ft_nblength(nb), int_array);
	return (cnumber);
}
/*
int	main()
{
	printf("%s", ft_itoa(20));
}*/