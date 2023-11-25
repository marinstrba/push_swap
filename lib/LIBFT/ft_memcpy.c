/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:34:15 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/18 16:40:17 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*a;
	const unsigned char	*b;

	a = dest;
	b = src;
	while (n)
	{
		*a = *b;
		a++;
		b++;
		n--;
	}
	return (dest);
}
