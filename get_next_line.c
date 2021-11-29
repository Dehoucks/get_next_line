/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: robindehouck <robindehouck@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:40:31 by robindehouc       #+#    #+#             */
/*   Updated: 2021/11/29 09:56:18 by robindehouc      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

void	ft_bzero(void *string, int byte_length)
{
	int				i;
	unsigned char	*c;

	c = string;
	i = 0;
	while (i < byte_length)
	{
		c[i] = 0;
		i++;
	}
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *source1, char const *source2)
{
	char	*joined;
	int		length;
	int		i;
	int		j;

	if (!source2)
		return (NULL);
	i = 0;
	j = 0;
	length = ft_strlen(source1) + ft_strlen(source2);
	joined = malloc(sizeof(joined) + length + 1);
	if (!(joined))
		return (NULL);
	while (source1 && source1[i])
	{
		joined[i] = source1[i];
		i++;
	}
	while (source2[j])
	{
		joined[i] = source2[j++];
		i++;
	}
	joined[i] = 0;
	return (joined);
}

char*	ft_removeline(char* stocker)
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
		temp[j++] = stocker[i++];
	}
	temp[j] = '\0';
	return (temp);
}

char*	ft_getline(char *line, char* source)
{
	int	i;

	i = 0;
	while (source[i] != '\n')
	{
		(line)[i] = source[i];
	}
	return (line);
}

int get_next_line(const int fd, char **line)
{
	static char	*stocker;
	int			i;
	char		*temp;

	if (fd < 0 || BUFF_SIZE < 1)
		return (-1);
	temp = malloc(sizeof(char) * BUFF_SIZE + 1);
	if (!temp)
		return (-1);
		i = 0;
	if ((read(fd, temp, BUFF_SIZE)) > 0) //change while to if for the real test
	{
		if (i != 0)
			temp = malloc(sizeof(char) * BUFF_SIZE + 1);
		i++;
		stocker = ft_strjoin(stocker, temp);
		printf("%s\n", temp);
		free(temp);
		ft_bzero(temp, BUFF_SIZE);
	}
	stocker[ft_strlen(stocker)] = 0;
	printf("\n\n\nstocker : %s \n", stocker);
	//line = ft_getline(&line,(char*) stocker);
	//stocker = ft_removeline((char*) stocker);
	return (1);
}

int main(void)
{
    int filedesc = open("testfile.txt", O_RDWR, S_IRUSR | S_IWUSR);
	int	i = 0;
	char		*temp;
	temp = malloc(sizeof(char) * BUFF_SIZE + 1);

    if (filedesc < 0) {
        return -1;
    }
	/*
	i = read(filedesc, temp, BUFF_SIZE);
	printf("%d", i);
	*/
	char	**line;

	get_next_line(filedesc, line);
	i++;
}