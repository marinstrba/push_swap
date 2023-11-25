/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_phexl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:21:06 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/21 21:23:04 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_phexl(va_list args)
{
	unsigned int	n;
	int				res;

	n = va_arg(args, unsigned int);
	res = ft_puthexlu(n, 1);
	return (res);
}
