/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_correct_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:09:36 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/26 15:45:35 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_correct_format(char c, va_list args)
{
	int	res;

	res = 0;
	if (c == 'c')
		res = ft_pchar(args);
	else if (c == 'd')
		res = ft_pdec(args);
	else if (c == 's')
		res = ft_pstr(args);
	else if (c == 'p')
		res = ft_pvoid(args);
	else if (c == 'i')
		res = ft_pint(args);
	else if (c == 'u')
		res = ft_pudec(args);
	else if (c == 'x')
		res = ft_phexl(args);
	else if (c == 'X')
		res = ft_pexu(args);
	else
		res = ft_putchar(37);
	return (res);
}
