/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 23:07:06 by maurian           #+#    #+#             */
/*   Updated: 2024/02/19 10:11:33 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t		str_len;
	char		*dp;
	const char	*sp;

	str_len = ft_strlen(src);
	dp = dst;
	sp = src;
	if (size == 0)
		return (str_len);
	while (*sp && size > 1)
	{
		*dp = *sp;
		size--;
		dp++;
		sp++;
	}
	*dp = '\0';
	return (str_len);
}
