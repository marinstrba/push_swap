/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstrba <mstrba@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:04:42 by mstrba            #+#    #+#             */
/*   Updated: 2023/10/26 14:50:44 by mstrba           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
 In this function I write out actual characters,
 which are passed to me in format variable.
 I also check for formats
*/

int	ft_print_str(const char *format, va_list args)
{
	char	*str;
	int		index;
	int		sum;

	index = 0;
	sum = 0;
	str = (char *)format;
	while (str[index])
	{
		if (!(ft_check_format(str, index)))
		{
			ft_putchar(str[index]);
			index++;
			sum++;
		}
		else
		{
			sum += ft_print_format(str, index, args);
			index += 2;
		}
	}
	return (sum);
}
