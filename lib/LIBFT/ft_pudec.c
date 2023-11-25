/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pudec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:21:23 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/21 21:21:24 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pudec(va_list args)
{
	unsigned int	n;
	int				res;

	n = va_arg(args, unsigned int);
	res = ft_putunbr(n);
	return (res);
}
