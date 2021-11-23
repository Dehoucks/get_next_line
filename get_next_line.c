/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:40:31 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/22 20:02:55 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

char* ft_removeline(static char stocker)
{
	int		i;
	int		j;
	char*	temp;

	i = 0;
	j = 0;
	while (stocker[i] != '\n')
	{
		i++;
	}
	i++;
	while (stocker[i])
	{
		temp[j++] = stocker[i++]
	}
	temp[j] = '\0';
	return (temp);
}

char*	ft_getline(char **line, static char source)
{
	int	i;

	i = 0;
	while (source[i] != '\n')
	{
		line[i] = source[i];
	}
	return (line);
}

int get_next_line(const int fd, char **line)
{
	static char	*stocker;
	int			i;
	char		temp;

	if (fd < 0 || BUFF_SIZE < 1)
		return (-1);
	temp = malloc(sizeof(char) * BUFF_SIZE + 1);
	if (!temp)
		return (-1);
	while (i = reader(fd, temp, BUFF_SIZE))
	{
		stocker = ft_strjoin(stocker, temp);
	}
	stocker
	*line = ft_getline(line, stocker);
	stocker = ft_removeline(stocker);
	return (1);
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

