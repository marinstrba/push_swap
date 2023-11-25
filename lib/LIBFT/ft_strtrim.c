/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:31:17 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/24 15:09:27 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	index;
	size_t	start;
	size_t	end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	index = 0;
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && check(s1[start], set))
		start++;
	while (end > start && check(s1[end - 1], set))
		end--;
	res = (char *) malloc(sizeof(char) * (end - start + 1));
	if (res == NULL)
		return (NULL);
	s1 += start;
	while (start < end)
	{
		res[index++] = *s1++;
		start++;
	}
	res[index] = '\0';
	return (res);
}
