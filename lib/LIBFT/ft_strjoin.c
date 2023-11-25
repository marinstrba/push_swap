/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:21:27 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/21 13:30:38 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	len;
	size_t	index;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	index = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char *) malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (*s1)
	{
		res[index] = *s1;
		s1++;
		index++;
	}
	while (*s2)
	{
		res[index] = *s2;
		s2++;
		index++;
	}
	res[index] = '\0';
	return (res);
}
