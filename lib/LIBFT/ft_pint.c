/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:21:13 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/21 21:23:04 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pint(va_list args)
{
	int	n;
	int	res;

	n = va_arg(args, int);
	res = ft_putnbr(n);
	return (res);
}
