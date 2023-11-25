/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:20:09 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/18 16:23:28 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*a;
	unsigned char	ch;

	a = (unsigned char *)ptr;
	ch = value;
	while (num)
	{
		*a = ch;
		a++;
		num--;
	}
	return (ptr);
}
