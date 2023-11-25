/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 11:19:58 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/22 17:29:07 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*hay;
	unsigned char		need;

	hay = (const unsigned char *)s;
	need = (unsigned char)c;
	while (n)
	{
		if (*hay == need)
			return ((void *)hay);
		n--;
		hay++;
	}
	return (NULL);
}
