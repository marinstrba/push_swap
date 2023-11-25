/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:21:19 by mstrba            #+#    #+#             */
/*   Updated: 2023/11/21 21:23:04 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pstr(va_list args)
{
	char	*str;
	int		res;

	res = 0;
	str = va_arg(args, char *);
	res += ft_putstr(str);
	return (res);
}
