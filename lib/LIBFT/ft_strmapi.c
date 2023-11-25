/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:50:22 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/21 15:54:35 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	size_t			len;
	unsigned int	index;

	index = 0;
	len = ft_strlen(s);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (*s)
	{
		res[index] = f(index, *s);
		s++;
		index++;
	}
	res[index] = '\0';
	return (res);
}
