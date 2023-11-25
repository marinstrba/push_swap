/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:50:27 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/20 15:14:39 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char	*s1, char	*s2)
{
	char	*temp;

	temp = ft_strjoin(s1, s2);
	free(s1);
	s1 = temp;
	return (s1);
}

char	*ft_remove_line(char	*buffer)
{
	char	*res;
	size_t	index;

	index = 0;
	if (!buffer)
		return (NULL);
	while (buffer[index] && buffer[index] != '\n')
		index++;
	if (buffer[index] == '\0')
	{
		free(buffer);
		return (NULL);
	}
	index++;
	res = ft_strdup(&buffer[index]);
	free(buffer);
	return (res);
}

char	*ft_read_line(char	*buffer)
{
	char	*line;
	size_t	index;
	size_t	l_index;

	index = 0;
	l_index = 0;
	if (!buffer[0])
		return (NULL);
	while (buffer[index] && buffer[index] != '\n')
		index++;
	line = calloc(index + 2, sizeof(char));
	if (!line)
		return (NULL);
	while (l_index < index)
	{
		line[l_index] = buffer[l_index];
		l_index++;
	}
	if (buffer[l_index] && buffer[l_index] == '\n')
		line[l_index++] = '\n';
	line[l_index] = '\0';
	return (line);
}

char	*ft_read_file(int fd, char	*res)
{
	char	*buffer;
	int		bytes_read;

	bytes_read = 1;
	if (!res)
		res = calloc(1, sizeof(char));
	buffer = calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!res || !buffer)
		return (NULL);
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(buffer);
			free(res);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		res = ft_realloc(res, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if (!buffer || !ft_strchr(buffer, '\n'))
		buffer = ft_read_file(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_read_line(buffer);
	buffer = ft_remove_line(buffer);
	return (line);
}
