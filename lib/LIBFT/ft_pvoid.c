/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pvoid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:21:27 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/21 21:21:47 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pvoid(va_list args)
{
	void	*p;
	int		res;

	res = 0;
	p = va_arg(args, void *);
	if (p == NULL)
	{
		ft_putstr("(nil)");
		return (5);
	}
	res += ft_putstr("0x");
	res += ft_puthex((uintptr_t) p);
	return (res);
}
