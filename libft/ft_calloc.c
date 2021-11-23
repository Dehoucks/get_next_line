/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:24:36 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/11 22:58:55 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelements, size_t byte_size)
{
	void	*p;

	p = malloc(nelements * byte_size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, nelements * byte_size);
	return (p);
}

/*
int main()
{
	char	*bonjour;

	bonjour = "0123456789000000000";
	bonjour = (char *)ft_calloc(10, 1);
	printf("%s", bonjour);
}*/