/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:18:11 by mstrba            #+#    #+#             */
/*   Updated: 2024/02/22 15:06:04 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
