/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 10:58:23 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/22 17:27:03 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int character)
{
	const char	*res;

	res = str;
	while (*res)
	{
		if (*res == (char)character)
			return ((char *)res);
		res++;
	}
	if (character == '\0')
		return ((char *)res);
	return (NULL);
}
