/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:42:25 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/21 15:20:28 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t length)
{
	unsigned char		*ds;
	const unsigned char	*sr;

	ds = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (ds > sr && sr + length > ds)
	{
		while (length)
		{
			length--;
			*(ds + length) = *(sr + length);
		}
	}
	else
	{
		while (length)
		{
			*ds = *sr;
			ds++;
			sr++;
			length--;
		}
	}
	return ((void *)dest);
}
