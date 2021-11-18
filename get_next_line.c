/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:40:31 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/18 00:34:28 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	line_lengthmax(const int fd)
{
	char	c[0];
	static int		i = 0;
	int	lmax = 0;
	int	before;
		
	
	while (read(fd, c, 1) != 0 && c[0] != '\n')
	{
		printf("%s ", c);
		i++;
		if (c[1] == '\n')
		{
			read(fd, c, 1);
			if (i > lmax)
			{
				lmax = i;
				i = 0;
			}
		}
	}
	return (lmax);
}

int get_next_line(const int fd, char **line)
{
	int 	x = 1;

	printf("lmax = %d", line_lengthmax(fd));

    return 0;
}

int main(void)
{
    int filedesc = open("testfile.txt", O_RDWR, S_IRUSR | S_IWUSR);
	int	i = 0;
    if (filedesc < 0) {
        return -1;
    }

	char	**line;
	while (i < 11)
	{
		get_next_line(filedesc, line);
		i++;
	}
}

