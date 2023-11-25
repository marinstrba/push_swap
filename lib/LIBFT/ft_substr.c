/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 13:06:08 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/26 13:12:39 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	index;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	index = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	subs = (char *) malloc((len + 1) * sizeof(char));
	if (subs == NULL)
		return (NULL);
	s += start;
	while (index < len && *s)
	{
		subs[index] = *s;
		s++;
		index++;
	}
	subs[index] = 0;
	return (subs);
}
